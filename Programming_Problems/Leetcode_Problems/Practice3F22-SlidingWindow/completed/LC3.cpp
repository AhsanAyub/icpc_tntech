#include<iostream>
#include<set>
#include<string>

using namespace std;


int lengthOfLongestSubstring(string s) {
    int n = s.size();
    set<int> inst;
    int max = 0;
    int front = 0;
    int back = 0;
    if (n == 0)
        return 0;
    set<int>::iterator temp;
    while (back != n)
    {
        temp = inst.find(s[back]);
        if (temp == inst.end())
        {
            inst.insert(s[back]);
            back++;
            if (back - front > max)
                max = back - front;
        }
        else
        {
            inst.erase(inst.find(s[front]));
            front++;
        }
    }
    
    return max;
}


int main()
{
    string input;
    cin >> input;
    cout << endl << lengthOfLongestSubstring(input);
}