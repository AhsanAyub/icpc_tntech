#include<iostream>
#include<set>
#include<string>
#include<vector>

using namespace std;

int characterReplacement(string s, int k) 
{
    int n = s.size();
    if (n == 0) return 0;
    int occure[26];
    int max = 0;
    int common = 0;
    for (int i = 0; i < 26; i++)
    {
        occure[i] = 0;
    } 

    int left = 0, right = 0;
    occure[s[right] - 65]++;
    while (right < n)
    {
        if (occure[s[right] - 65] >= occure[common])
        {
            common = s[right] - 65;
        }

        if (right - left + 1 > max && right - left + 1 - occure[common] <= k)
            max = occure[common] + k;

        if (occure[common] + k >= (right - left + 1))
        {
            right++;
            if (right == n) break;
            occure[s[right] - 65]++;
        }
        else 
        {
            occure[s[left] - 65]--;
            left++;
        }

    }

    if (right == n && occure[s[right - 1] - 65] == occure[s[n - 1] - 65])
    {
        if (occure[s[right - 1] - 65] + k > max)
            max = occure[s[right - 1] - 65] + k;
    }

    if (max > n) return n;
    return max;
}

int main()
{
    string input = "AAAAABBBBCBB";
    int num = 4;
    // cin >> num;
    // cin >> input;
    cout << endl << characterReplacement(input, num);
}
    