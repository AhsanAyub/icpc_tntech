#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool isPalindrome(string s) {
        string str = "";
        
        for(int i = 0; i < s.length(); ++i){
            s[i] = tolower(s[i]);
            
            if(isalnum(s[i])){
                str += s[i];
            }
        }
        
        int i = 0;
        int j = str.length() - 1;
        
        while(i < j){
            if(str[i] != str[j]){
                return false;
            }
            
            ++i;
            --j;
        }
        
        return true;
    }
};


int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Invalid amount of arguments.\n";
        return -1;
    }

    string s(argv[1]);
    
    if(Solution::isPalindrome(s)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }

    return 0;
}