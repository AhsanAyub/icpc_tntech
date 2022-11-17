#include<iostream>
#include<set>
#include<string>
#include<vector>

using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) 
{        
    int n = arr.size();
    int a = 0;
    vector<int> result;

    while (a < n - 1 && abs(arr.at(a + 1) - x) <= abs(arr.at(a) - x) && arr.at(a) <= x)
    {
        a++;
    }

    int r, l;
    r = a; l = a - 1;

    while (r - l <= k && !(r > n && l < 0))
    {
        if (r - l <= k && r < n)
        {
            if (l < 0 || (abs(arr.at(r) - x) < abs(arr.at(l) - x)))
            {
                result.insert(result.end(), arr.at(r));
                r++;
            }
        }
        if (r - l <= k && l >= 0)
        {
            if (r >= n || (abs(arr.at(l) - x) <= abs(arr.at(r) - x)))
            {
                result.insert(result.begin(), arr.at(l));
                l--;
            }
        }
        
    }

    
    

    return result;  
}


int main()
{
    vector<int> input = {1,1,1,10,10,10};
    int num1 = 1;
    int num2 = 9;

    vector<int> re = findClosestElements(input, num1, num2);
    
    for (int i = 0; i < re.size(); i++)
    {
        cout << re[i] << " ";
    }
}
    