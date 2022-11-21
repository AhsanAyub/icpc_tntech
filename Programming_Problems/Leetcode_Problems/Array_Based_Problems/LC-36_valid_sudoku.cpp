#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> row(9);
        vector<vector<char>> col(9);
        vector<vector<char>> subsqr(9);
        
        for(int i = 0; i < board.size(); ++i){
            for(int j = 0; j < board[i].size(); ++j){
                int sqr = ((i / 3) * 3 + (j / 3));
                
                if(board[i][j] == '.') continue;
                
                if(find(row[i].begin(), row[i].end(), board[i][j]) != row[i].end() ||
                   find(col[j].begin(), col[j].end(), board[i][j]) != col[j].end() || 
                   find(subsqr[sqr].begin(), subsqr[sqr].end(), board[i][j]) != subsqr[sqr].end()){
                    return false;
                }
                
                row[i].push_back(board[i][j]);
                col[j].push_back(board[i][j]);
                subsqr[sqr].push_back(board[i][j]);
            }
        }
        
        return true;
    }
};

int main(int argc, char* argv[]){
    if(argc != 82){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    char m;
    stringstream iss;
    vector<vector<char>> matrix(9);

    for(int i = 0; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        matrix[i / 9].push_back(m);
    }

    if(Solution::isValidSudoku(matrix)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }

    return 0;
}