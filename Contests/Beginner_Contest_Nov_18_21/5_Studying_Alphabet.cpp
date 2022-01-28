#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    short N;
    cin >> N;

    while(N)
    {
        string t;
        cin >> t;
        bool flag = true;
        for(int i = 0; t[i] != '\0'; i++)
        {
            int found = s.find(t[i]);
            if(found < 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        N -= 1;
    }

    return 0;
}