#include "Solution.h"

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> app(n + 1, 0);
        
        for (int i = 0; i < n; i++)
        {
            app[nums[i]]++;
        }
        
        vector<int> final;
        
        for (int i = 1; i < n + 1; i++)
        {
            if(app[i] == 0)
            {
                final.push_back(i);
            }
        }
        
        return final;
    }
};