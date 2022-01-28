#include <iostream>
#include <cstring>
#include <cmath>

#define N 100

using namespace std;

int main()
{
    // 0 for IS prime and 1 for NOT prime
    bool primes[N+1];
    memset(primes, 0, sizeof(primes));  // make all primes
    
    // Derive the square root of N
    int sq = sqrt(N);

    // Sieve the primes between 2 and N by iterating from 2 to sq
    for(int i = 2; i <= sq; i++)
    {
        // Find the multiples and mark them non-primes
        if(primes[i] == 0)
        {
            for(int j = i + i; j <= N; j += i)
                primes[j] = 1; // not prime;
        }
    }

    // 1 is not a prime number
    primes[1] = 0;

    // Display the primes betweem 1 and N
    for(int i = 1; i <= N; i++)
    {
        if(!primes[i])
            cout << i << " ";
    } 
    cout << endl;

    return 0;
}