#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t) return true;
        
        return false;
    }
};

int main(int argc, char* argv[]){
    if(argc != 3){
        cerr << "Invalid amount of arguments.\n";
        return -1;
    }

    string s(argv[1]);
    string t(argv[2]);
    
    if(Solution::isAnagram(s, t)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }

    return 0;
}