#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int size = s1.size();

    for(int i = 0; i < size; ++i){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    if(s1 == s2){
        cout << 0 << endl;
    }
    else if(s1 < s2){
        cout << -1 << endl;
    }
    else{
        cout << 1 << endl;
    }

    return 0;
}