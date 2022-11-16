#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        multimap<int, int> mlmp;
        
        for(auto i : nums){
            if(mp.find(i) != mp.end()){
                mp[i]++;
            }
            else{
                mp[i] = 1;
            }
        }
        
        for(auto i : mp){
            mlmp.insert({i.second, i.first});
        }
        
        int count = 0;
        vector<int> ans;
        
        for(auto it = mlmp.rbegin(); it != mlmp.rend() && count != k; ++it){
            ans.push_back(it->second);
            count++;
        }
        
        return ans;
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    int m, k;
    stringstream iss;
    vector<int> nums;

    iss.str(argv[1]);

    if((iss >> k).fail()){
        cerr << "Arguments should be integers.\n";
        return -1;
    }

    for(int i = 1; i < argc - 1; ++i){
        iss.clear();
        iss.str(argv[i + 1]);

        if((iss >> m).fail()){
            cerr << "Arguments should be integers.\n";
            return -1;
        }

        nums.push_back(m);
    }

    vector<int> ans = Solution::topKFrequent(nums, k);

    for (auto i : ans){
        cout << i << " ";
    }
    cout << "\n";  

    return 0;
}