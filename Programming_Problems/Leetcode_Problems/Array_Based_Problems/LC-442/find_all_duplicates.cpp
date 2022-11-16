#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> findDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        int length = nums.size();
        
        for(int i = 0; i < length; ++i){
            pair<set<int>::iterator, bool> it = s.insert(nums[i]);
            
            if(!it.second){
                ans.push_back(nums[i]);
            }
            
            s.insert(nums[i]);
        }
        
        return ans;
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

    vector<int> ans = Solution::findDuplicates(nums);

    for(auto i : ans){
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}