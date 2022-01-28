// https://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char str[101];
    char resultString[202];

    cin >> str;

    unsigned short i = 0;
    unsigned short resultStringLength = 0;
    while(str[i])
    {
        str[i] = tolower(str[i]);

        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
        {
            resultString[resultStringLength++] = '.';
            resultString[resultStringLength++] = str[i];
        }
        i++;
    }
    resultString[resultStringLength] = '\0';
    cout << resultString << endl;
    return 0;
}