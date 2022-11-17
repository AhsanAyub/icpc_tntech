#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int front = 0;
        int back = n - 1;
        int max = 0;
        
        int temp;
        
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = n-1; j > i; j--)
            {
                temp = min(height[i], height[j]) * (j - i);
                if (temp > max)
                {
                    max = temp;
                    cout << i << " " << j;
                }
                while (j > 0 && height[j - 1] < height[j])
                {
                    j--;
                    cout << i << " " << j;
                }
            }
            while (i < n-2 && height[i] > height[i+1])
            {
                i++;
            }
        }
        return max;
    }
};


int main()
{
    filei
    Solution s;
    vector<int> h;
    cout << s.maxArea(h);

    return 0;
}