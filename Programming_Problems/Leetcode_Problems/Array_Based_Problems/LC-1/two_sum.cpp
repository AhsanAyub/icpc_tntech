#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it;
        int size = nums.size();
        
        for(int i = 0; i < size; ++i){
            it = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
            
            if(it != nums.end()){
                int dist = it - nums.begin();
                return {i, dist};
            }
        }
        
        return {0, 0};
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int target;
    int m;
    stringstream iss;
    vector<int> nums;

    iss.str(argv[argc - 1]);

    if((iss >> target).fail()){
        cerr << "Arguments should be integers.\n";
        return -1;
    }

    for(int i = 1; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    vector<int> ans = Solution::twoSum(nums, target);

    for(auto i : ans){
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}