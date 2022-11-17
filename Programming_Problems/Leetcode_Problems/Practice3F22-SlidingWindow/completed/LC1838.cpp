#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxFrequency(vector<int>& nums, int k) 
{
    int n = nums.size();
    if (n == 0) return 0;
    int freq = 0;
    int dif = -1;
    int r = 1;
    int l = 0;
    long long kk = k;
    int max = 1; 
    sort(nums.begin(), nums.end());

    while (r < n && l < n - 1)
    {
        if (kk >= 0)
        {
            dif = nums.at(r) - nums.at(r - 1);
            kk -= (long long) dif * (r - l);
            r++;
            if (r - l > max && kk >= 0)
            {
                max = r - l;
            }
        }
        else 
        {
            dif = nums.at(r - 1) - nums.at(l);
            kk += dif * 1;
            l++;
        }
    }
  
    return max;
}

int main()
{
    //vector<int> input = {1,2,4};
    vector<int> input = {3,9,6}; 
    int swaps = 2;

    cout << maxFrequency(input, swaps);
}
    