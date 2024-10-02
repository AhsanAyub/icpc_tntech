#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int characterReplacement(string s, int k) {
        int left = 0, freq = 0;
        unordered_map<char, int> mp;
        int ans = 0;

        for(int right = 0; right < s.size(); ++right){
            mp[s[right]] += 1;
            freq = max(freq, mp[s[right]]);

            if(!(right + 1 - left - freq <= k)){
                mp[s[left]] -= 1;
                left += 1;
            }

            ans = right + 1 - left;
        }

        return ans;
    }
};

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Invalid amount of arguments.\n";
        return -1;
    }

    string s(argv[1]);
    int i = atoi(argv[2]);
    
    cout << Solution::characterReplacement(s, i) << "\n";

    return 0;
}