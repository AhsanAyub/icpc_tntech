//https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    
    char expression[5];
    while(n)
    {
        cin >> expression;
        if(expression[1] == '+')
            result += 1;
        else
            result -= 1;
        n--;
    }
    cout << result << endl;

    return 0;
}