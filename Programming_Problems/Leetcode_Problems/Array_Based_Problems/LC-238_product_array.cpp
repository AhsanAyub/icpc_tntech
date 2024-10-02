#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int product = 1;
        int zeroCount = count(nums.begin(), nums.end(), 0);
        
        if(zeroCount > 1){
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        
        for(auto i: nums){
            product *= i ? i : 1;
        }
        
        for(int i = 0; i < size; ++i){
            if(zeroCount == 1){
                nums[i] = nums[i] ? 0 : product;
            }
            else{
                nums[i] = product / nums[i];
            }
        }
        
        return nums;
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

    vector<int> ans = Solution::productExceptSelf(nums);

    for(auto i : ans){
        cout << i << " ";
    }

    cout << "\n";

    return 0;
}