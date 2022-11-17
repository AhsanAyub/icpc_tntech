#include "Solution.h"

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> doop(n + 1, 0);
        
        for (int i = 0; i < n; i++)
        {
            doop[nums[i]]++;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (doop[i] >= 2)
            {
                return i;
            }
        }
        
        return 0;
    }
};