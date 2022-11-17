class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int c = 0;
        
        
        
        while (c < n - 2 && abs(nums.at(c)) >= abs(nums.at(c + 1)))
        {
                c++;
        }
        
        int f = c + 1;
        while (c >= 0 && f < n)
        {
            if (abs(nums[c]) < abs(nums[f]))
            {
                ans.push_back(nums[c] * nums[c]);
                c--;
            }
            else 
            {
                ans.push_back(nums[f] * nums[f]);
                f++;
            }
        }
        
        while (c >= 0)
        {
            ans.push_back(nums[c] * nums[c]);
            c--;
        }
        while (f < n)
        {
            ans.push_back(nums[f] * nums[f]);
            f++;
        }
        
        return ans; 
    }
};