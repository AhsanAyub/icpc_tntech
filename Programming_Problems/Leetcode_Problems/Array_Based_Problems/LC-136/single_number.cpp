#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int singleNumber(vector<int>& ans) {
        int size = ans.size() - 1;
        
        for(int i = 0; i < size; ++i){
            ans[i + 1] = ans[i] ^ ans[i + 1];
        }
        
        return ans[size];
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int m;
    stringstream iss;
    vector<int> nums;

    for(int i = 1; i < argc; ++i){
        iss.clear();
        iss.str(argv[i]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    cout << Solution::singleNumber(nums) << "\n";

    return 0;
}