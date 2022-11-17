class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        bool flag = true;
        
        for (int i = 0; i < n; i++)
        {
            if (!(isdigit(s[i]) || isalpha(s[i])))
            {
                s.erase(i, 1);
                n--;
                i--;
            }
            else if (isalpha(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
        
        int front = 0; 
        int back = n - 1;
        
        while (front < back)
        {            
            if (s[front] != s[back])
            {
                flag = false;
                break;
            }
            front++;
            back--;
        }
        
        return flag;
    }
};