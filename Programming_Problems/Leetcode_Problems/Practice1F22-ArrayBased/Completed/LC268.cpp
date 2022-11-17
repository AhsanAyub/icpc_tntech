#include "Solution.h"

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> missing(nums.size(), false);
        
        for (int i = 0; i < nums.size(); i++)
        {
            missing[nums[i]] = true;
        }
        
        for (int i = 0; i < missing.size(); i++)
        {
            if (missing[i] == false)
            {
                return i;
            }
        }
        
        return nums.size();
    }
};

/////////////////

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        if (nums[0] != 0)
        {
            return 0;
        }
        
        for (int i = 1; i < n; i++)
        {
            if ( nums[i] != nums[i - 1] + 1)
            {
                return i;
            }
        }
        
        return n;
        
    }
};