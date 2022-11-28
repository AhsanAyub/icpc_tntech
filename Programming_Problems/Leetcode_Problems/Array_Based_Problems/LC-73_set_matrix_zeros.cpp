#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        bool firstRow = false;
        bool firstCol = false;
        
        if(rows == 0) return;
        
        for(int i = 0; i < cols; ++i){
            if(matrix[0][i] == 0){
                firstRow = true;
                break;
            }
        }
        
        for(int i = 0; i < rows; ++i){
            if(matrix[i][0] == 0){
                firstCol = true;
                break;
            }
        }
        
        for(int i = 1; i < rows; ++i){
            for(int j = 1; j < cols; ++j){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        
        for(int i = 1; i < rows; ++i){
            for(int j = 1; j < cols; ++j){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i = 0; i < cols; ++i){
                matrix[0][i] = 0;
            }
        }
        
        if(firstCol){
            for(int i = 0; i < rows; ++i){
                matrix[i][0] = 0;
            }
        }   
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int n, m;

    cout << "Enter m rows followed by n columns: ";
    cin >> m >> n;

    if(n * m != argc - 1){
        cerr << "Numbers of rows and columns don't match number of arguments.\n";
        return -1;
    }

    int temp;
    stringstream iss;
    vector<vector<int>> matrix(m);

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            iss.clear();
            iss.str(argv[j + 1 + (i * n)]);

            if((iss >> temp).fail()){
                cerr << "Arguments should be integers.\n";
                return -1;
            }

            matrix[i].push_back(temp);
        }
    }

    Solution::setZeroes(matrix);

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}