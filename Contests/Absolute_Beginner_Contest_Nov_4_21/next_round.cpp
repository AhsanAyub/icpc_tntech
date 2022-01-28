// https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

int main()
{
    unsigned short n, k, result = 0;
    cin >> n >> k;
    short *participants = (short*) malloc(n * sizeof(short));
    
    for(int i = 0; i < n; i++)
        cin >> participants[i];
    
    for(int i = 0; i < n; i++)
    {
        if(participants[i] >= participants[k-1] && participants[i] > 0)
            result += 1;
    }
    cout << result << endl;
    return 0;
}