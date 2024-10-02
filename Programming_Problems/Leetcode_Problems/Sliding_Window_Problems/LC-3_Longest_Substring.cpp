#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int lengthOfLongestSubstring(string s) {
        if(s.length() < 2){
            return s.length();
        }

        int left = 0, right = 0;
        unordered_map<char, int> mp;
        int ans = 0;

        while(right < s.size()){
            if(mp.find(s[right]) != mp.end()){
                left = max(left, mp[s[right]] + 1);
            }

            mp[s[right]] = right;
            ans = max(ans, right - left + 1);
            ++right;
        }

        return ans;
    }
};

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Invalid amount of arguments.\n";
        return -1;
    }

    string s(argv[1]);
    
    cout << Solution::lengthOfLongestSubstring(s) << "\n";

    return 0;
}