// Problem link: https://www.codechef.com/problems/KTTABLE
#include <iostream>
using namespace std;

int main()
{
    short T;
    cin >> T;

    while(T)
    {
        int result = 0;
        int N;
        cin >> N;
        int *Ak = (int*) malloc((N+1) * sizeof(int));
        Ak[0] = 0;
        for(int i = 1; i <= N; i++)
            cin >> Ak[i];
        
        int *Bk = (int*) malloc(N * sizeof(int));
        for(int i = 0; i < N; i++)
            cin >> Bk[i];

        for(int i = 0; i < N; i++)
        {
            if((Ak[i+1] - Ak[i]) >= Bk[i])
                result += 1;
        }
        cout << result << endl;
        T -= 1;
        free(Ak);
        free(Bk);
    }

    return 0;
}