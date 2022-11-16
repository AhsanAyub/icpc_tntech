#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        for(i; i < size; ++i){
            if(i != nums[i]){
                return i;
            }
        }
        
        return i;
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

    int ans = Solution::missingNumber(nums);

    cout << ans << "\n";

    return 0;
}