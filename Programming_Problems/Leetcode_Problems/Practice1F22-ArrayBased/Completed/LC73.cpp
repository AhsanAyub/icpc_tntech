#include "Solution.h"

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        bool setRZero;
        vector<int> zeroCol(cols, 1);
        
        for (int i = 0; i < rows; i++)
        {
            setRZero = false;
            for (int j = 0; j < cols; j++)
            {
                if (matrix.at(i).at(j) == 0)
                {
                    zeroCol[j] = 0;
                    setRZero = true;
                }
            }
            
            if (setRZero == true)
            {
                for (int j = 0; j < cols; j++)
                {
                    matrix[i][j] = 0; 
                }
            }
        }
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (zeroCol[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};