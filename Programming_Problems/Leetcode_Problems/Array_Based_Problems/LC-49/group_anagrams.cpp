#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto s: strs){
            string temp = s;
            sort(s.begin(), s.end());
            mp[s].push_back(temp);
        }
        
        for(map<string, vector<string>>::iterator it = mp.begin(); it != mp.end(); ++it){
            ans.push_back(it->second);
        }
        
        return ans;
    }
};

int main(int argc, char* argv[]){
    if(argc == 1){
        cerr << "Incorrect amount of arguments.\n";
        return -1;
    }

    vector<string> strs;
    
    for(int i = 0; i < argc; ++i){
        string temp(argv[i]);
        strs.push_back(temp);
    }

    
    vector<vector<string>> ans = Solution::groupAnagrams(strs);

    for(int i = 1; i < ans.size(); ++i){
        for(int j = 0; j < ans[i].size(); ++j){
            cout << ans[i][j] << " ";
        }

        cout << "\n";
    }

    cout << "\n";

    return 0;
}