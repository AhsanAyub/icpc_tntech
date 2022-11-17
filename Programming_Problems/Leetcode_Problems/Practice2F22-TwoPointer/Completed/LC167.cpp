class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int f = 0; 
        int b = n - 1;
        while (numbers[b] > target && target > 0)
        {
            b--;
        }
        
        while (numbers[f] + numbers[b] != target)
        {
            if (numbers[f] + numbers[b] > target)
            {
                b--;
            }
            else 
            {
                f++;
            }
        }
        vector<int> ans;
        
        ans.push_back(f + 1);
        ans.push_back(b + 1);
        
        return ans;
    }
};