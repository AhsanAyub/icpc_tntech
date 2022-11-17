#include<iostream>
#include<string>

using namespace std;

int minFlips(string s) 
{
    int n = s.size();
    int swaps = 0; 
    int starting_bit;

    int even1 = 0; 
    int odd0 = 0;
    int even0 = 0;
    int odd1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (s.at(i) == '1')
                even1++;
            else 
                even0++;
        }
        else 
        {
            if (s.at(i) == '1')
                odd1++;
            else 
                odd0++;
        }
    }

    if (even1 + odd0 > even0 + odd1)
    {
        if (n % 2 == 0)
        {
            return ((even1 + odd0) - (even0 + odd1));
        }
        else
        {
            
        }
    }
    else
    {
        if (n % 2 == 0)
        {
            return ((even0 + odd1) - (even1 + odd0));
        }
        else
        {
            
        } 
    }
    
    return swaps;
}

int main()
{
    string input = "111000";

    return minFlips(input);
}
    