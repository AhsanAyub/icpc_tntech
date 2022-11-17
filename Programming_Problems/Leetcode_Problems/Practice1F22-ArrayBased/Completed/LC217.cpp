#include "Solution.h"

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> duplicate;
        
        for (int j = 0; j < n; j++)
        {
           duplicate[nums[j]]++;
            
            if (duplicate[nums[j]] > 1)
            {
                return true;
            }
        }
        return false; 
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 1; i < n; i++)
        {
           if (nums[i] == nums[i - 1]){
               return true; 
           }
        }
        return false; 
    }
};