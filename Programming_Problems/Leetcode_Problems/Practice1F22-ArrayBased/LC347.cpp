#include "Solution.h"

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> count(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++; 
        }
        
        vector<int> max(k, 0);
        
        for (int i = 0; i < count.size(); i++)
        {
            for (int j = 1; count[i] > max[k - j]; j++)
            {
                if (j != 1)
                {
                    max[k+1-j] = max[k-j];
                }
                
                max[k - j] = count[i];
            }  
        }
        return max;
    }
};