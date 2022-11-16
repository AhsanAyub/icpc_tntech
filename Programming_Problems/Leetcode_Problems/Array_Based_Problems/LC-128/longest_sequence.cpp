#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int longestConsecutive(vector<int>& nums) {
        set<int> s;
        
        for(auto i: nums){
            s.insert(i);   
        }
        
        int ans = 0;
        
        for(int i: s){
            if(s.find(i - 1) == s.end()){
                int num = i;
                int streak = 1;
                
                while(s.find(num + 1) != s.end()){
                    ++streak;
                    ++num;
                }
                
                ans = max(ans, streak);
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

    for(int i = 0; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    cout << Solution::longestConsecutive(nums) << "\n";

    return 0;
}