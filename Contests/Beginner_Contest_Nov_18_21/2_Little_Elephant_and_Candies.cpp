// Problem link: https://www.codechef.com/problems/LECANDY
#include <iostream>
using namespace std;

int main()
{
    unsigned short T;
    cin >> T;
    while(T)
    {
        unsigned int N;
        int C;
        cin >> N >> C;
        
        unsigned int *Ak = (unsigned int*) malloc(N * sizeof(unsigned int));
        for(int i = 0; i < N; i++)
            cin >> Ak[i];
        
        bool isPossible = true;
        for(int i = 0; i < N; i++)
        {
            C -= Ak[i];
            if(C < 0)
            {
                isPossible = false;
                break;
            }
        }
        if(isPossible)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        free(Ak);
        T--;
    }

    return 0;
}