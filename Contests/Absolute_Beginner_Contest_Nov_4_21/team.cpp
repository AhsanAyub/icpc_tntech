// https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;

int main()
{
    unsigned short n;
    cin >> n;
    unsigned short teams = 0;
    while(n)
    {
        unsigned short a, b, c;
        cin >> a >> b >> c;
        if((a+b+c) >= 2)
            teams += 1;
        n--;
    }
    cout << teams << endl;
    return 0;
}