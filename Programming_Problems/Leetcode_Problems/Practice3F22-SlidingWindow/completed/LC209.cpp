#include<vector>
#include<iostream>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int back = 0;
        int front = 0;
        int sum = 0;
        unsigned int min = -1;
        while (back <= n)
        {
            if (sum < target)
            {
                if (back >= n)
                    break;
                sum += nums[back];
                back++;
            }
            else  
            {
                if (back - front < min)
                    min = back - front;
                sum -= nums[front];
                front++; 
            }
        }
        
        if (min < 0 || min == -1)
            return 0;
        return min;
    }

    int main()
    {
        vector<int> input = {1,1,1,1,1,1,1,1};
        cout << minSubArrayLen(11, input);
    }