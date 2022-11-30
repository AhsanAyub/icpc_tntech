#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false;
        }

        vector<int> v1 (26, 0);
        vector<int> v2 (26, 0);

        for(int i = 0; i < s1.length(); ++i){
            v1[s1[i] - 'a']++;
            v2[s2[i] - 'a']++;
        }

        for(int i = s1.length(); i < s2.length(); ++i){
            if(helper(v1, v2)) return true;

            v2[s2[i] - 'a']++;
            v2[s2[i - s1.length()] - 'a']--;
        }

        return helper(v1, v2);
    }

    static bool helper(vector<int> v1, vector<int> v2){
        for(int i = 0; i < 26; ++i){
            if(v1[i] != v2[i]) return false;
        }

        return true;
    }
};

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Invalid amount of arguments.\n";
        return -1;
    }

    string s1(argv[1]);
    string s2(argv[2]);
    
    if(Solution::checkInclusion(s1, s2)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }

    return 0;
}