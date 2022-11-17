#include "Solution.h"

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> count;
        
        for (int i = 0; i < n; i++)
        {
            count[nums[i]]++;
        }
        
        for (auto x : count)
        {
            if (x.second == 1)
            {
                return x.first;
            }
        }
        
        return 0;
    }
};