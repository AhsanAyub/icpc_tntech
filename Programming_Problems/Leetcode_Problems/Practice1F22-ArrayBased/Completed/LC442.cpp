#include "Solution.h"

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }
        
        vector<int> final;
        
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 2)
            {
                final.push_back(i);
            }
        }
        
        return final;
    }
};