// Problem link: https://www.codechef.com/problems/HS08TEST
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned short x;
    double y;
    cin >> x >> y;

    cout << fixed;
    // If Withdrawal Amount is a multiple of 5
    if(!(x % 5))
    {
        if((double)x + 0.5 <= y)
            cout << setprecision(2) << (y - (x + 0.5)) << endl;
        else
            cout << setprecision(2) << y << endl;
    }
    else
        cout << setprecision(2) << y << endl;

    return 0;
}