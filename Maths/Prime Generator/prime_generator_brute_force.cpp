#include <iostream>
#include <cstring>
#define N 100

using namespace std;

int main()
{
    // 0 for IS prime and 1 for NOT prime
    bool primes[N+1];
    memset(primes, 0, sizeof(primes));  // make all primes

    // Iterate from 2 to N to identify which number is prime
    for(int i = 2; i <= N; i++)
    {
        // It checks if i is not prime
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                primes[i] = 1;  // Not prime
                break;
            }
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
}