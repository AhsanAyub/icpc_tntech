#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans (nums.size(), 0);
        int left = 0, right = ans.size() - 1;

        for(int k = nums.size() - 1; k >= 0; --k){
            if(abs(nums[left]) > abs(nums[right])){
                ans[k] = nums[left] * nums[left];
                ++left;
            } 
            else{
                ans[k] = nums[right] * nums[right];
                --right;
            }
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

    vector<int> ans = Solution::sortedSquares(nums);

    for(auto i : ans){
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}