class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<int>::iterator it;
        for (int i = 0; i < 9; i++)
        {
            set<int> occ;
            
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[i][j]))
                {
                    it = occ.find(board[i][j]);
                    if (it != occ.end())
                    {
                        occ.insert(board[i][j]);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        
        for (int i = 0; i < 9; i++)
        {
            set<int> occ;
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[j][i]))
                {
                    it = occ.find(board[j][i]);
                    if (it != occ.end())
                    {
                        occ.insert(board[j][i]);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        
        for (int i = 0; i < 9; i += 3)
        {
            set<int> occ;
            for (int j = 0; j < 9; j++)
            {
                if (isdigit(board[(3 * (i / 3)) + (j / 3)][(3 * (i % 3)) + (j % 3)]))
                {
                    it = occ.find(board[(3 * (i / 3)) + (j / 3)][(3 * (i % 3)) + (j % 3)]);
                    if (it != occ.end())
                    {
                        occ.insert(board[(3 * (i / 3)) + (j / 3)][(3 * (i % 3)) + (j % 3)]);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};