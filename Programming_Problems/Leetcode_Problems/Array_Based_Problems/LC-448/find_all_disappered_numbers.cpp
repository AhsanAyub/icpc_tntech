#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int>ans, count(size+1, 0);
        
        for(int i : nums){
            count[i]++;
        }
        
        for(int i = 1; i <= size; ++i){
            if(!count[i]) ans.push_back(i);
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

    for(int i = 0; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    vector<int> ans = Solution::findDisappearedNumbers(nums);

    for(auto i : ans){
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}