#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

bool checkInclusion(string s1, string s2) 
{
    int n = s2.size();
    int k = s1.size(); 
    int sum = 0;
    if (k > n)
        return false;
    unordered_map<char, int> target;
    unordered_map<char, int> current;

    int i;
    for ( i = 0; i < k; i++)
    {
        target[s1.at(i)]++;
        target[s2.at(i)]++;
        target[s2.at(i)]--;
        current[s2.at(i)]++;
    }
    
    while (i <= n)
    {
        if (target == current)
        {
            return true;
        }
        else if (i == n)
            return false;
        current[s2.at(i - k)]--;
        current[s2.at(i)]++;
        target[s2.at(i)]++;
        target[s2.at(i)]--;
        i++;
    }

    return false;
}

int main()
{
    string input = "dinitrophenylhydrazine";
    string in2 = "dimethylhydrazine";
    // cin >> num;
    // cin >> input;
    if (checkInclusion(in2, input))
        cout << "true";
    else cout << "false";
}
    