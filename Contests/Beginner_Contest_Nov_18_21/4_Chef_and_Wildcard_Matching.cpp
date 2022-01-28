#include <iostream>
using namespace std;

int main()
{
    short T;
    cin >> T;

    while(T)
    {
        bool flag = true;
        char s[11], t[11];
        cin >> s;
        cin >> t;
        
        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '?' || t[i] == '?')
                continue;
            else
            {
                if(s[i] != t[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cin.clear();
        T -= 1;
    }

    return 0;
}