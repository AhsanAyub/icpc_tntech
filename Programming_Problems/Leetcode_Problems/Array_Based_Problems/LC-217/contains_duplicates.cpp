#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        
        for(auto i : nums){
            s.insert(i);
        }
        
        if(s.size() == nums.size()) return false;
        
        return true;
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

    for(int i = 0; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    cout << (Solution::containsDuplicate(nums) ? "true" : "false") << "\n";

    return 0;
}