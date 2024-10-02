#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int leftBound = 0, topBound = 0, rightBound = n - 1, botBound = m - 1;
        
        while(leftBound <= rightBound && topBound <= botBound){
            for(int i = leftBound; i <= rightBound; ++i){
                ans.push_back(matrix[topBound][i]);
            }
            
            topBound++;
            
            for(int i = topBound; i <= botBound; ++i){
                ans.push_back(matrix[i][rightBound]);
            }
            
            rightBound--;
            
            if(topBound <= botBound){
                for(int i = rightBound; i >= leftBound; --i){
                    ans.push_back(matrix[botBound][i]);
                }
            }
            
            botBound--;
            
            if(leftBound <= rightBound){
                for(int i = botBound; i >= topBound; --i){
                    ans.push_back(matrix[i][leftBound]);
                }
            }
            
            leftBound++;
        }
        
        return ans;
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

    vector<int> ans = Solution::spiralOrder(matrix);

    for(auto i : ans){
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}