#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int findDuplicate(vector<int>& nums) {
        set<int> s;
        int length = nums.size();
        
        for(int i = 0; i < length; ++i){
            pair<set<int>::iterator, bool> it = s.insert(nums[i]);
            
            if(!it.second){
                return nums[i];
            }
            
            s.insert(nums[i]);
        }
        
        return 0;
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

    int ans = Solution::findDuplicate(nums);

    cout << ans << "\n";

    return 0;
}