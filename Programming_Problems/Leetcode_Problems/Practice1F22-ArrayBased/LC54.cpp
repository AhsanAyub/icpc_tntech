#include "Solution.h"

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int i = 0, r = 0, j = 0, b = 0, u = 0;
        int pass = 0;
        for (i = 0; i <= matrix.size() - 1 / 2; i++)
        {
            for (r = pass; r < matrix.at(i).size() - pass; r++)
            {
                ans.push_back(matrix.at(i).at(r));
            }
            for (j = pass; j < matrix.size() - pass; j++)
            {
                ans.push_back(matrix.at(j).at(r));
            }
            for (b = r; b >= 0 + pass; b--)
            {
                ans.push_back(matrix.at(j).at(b));
            }
            for (u = j; u > pass; u--)
            {
                ans.push_back(matrix.at(u).at(b));
            }
            pass++;
        }
        return ans;
    }
};