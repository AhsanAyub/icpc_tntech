// https://codeforces.com/problemset/problem/4/A
#include <iostream>
using namespace std;

int main()
{
    unsigned short w;
    cin >> w;

    if((w & 1) == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}