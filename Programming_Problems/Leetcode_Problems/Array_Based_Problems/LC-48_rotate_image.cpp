#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void transpose(vector<vector<int>>& matrix){
        int n = matrix.size();
        
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    
    static void reverse(vector<vector<int>>& matrix){
        int n = matrix.size();
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n / 2; ++j){
                swap(matrix[i][j], matrix[i][n - j - 1]);
            }
        }
    }
    
    static void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int n = sqrt(argc - 1);

    if(n * n != argc - 1){
        cerr << "Matrix is not perfect square.\n";
        return -1;
    }

    int m;
    stringstream iss;
    vector<vector<int>> matrix(n);

    for(int i = 0; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        matrix[i / n].push_back(m);
    }

    Solution::rotate(matrix);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << matrix[i][j] << " ";
        }

        cout << "\n";
    }
    
    return 0;
}