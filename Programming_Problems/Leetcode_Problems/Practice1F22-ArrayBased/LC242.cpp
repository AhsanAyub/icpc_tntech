
#include "Solution.h"

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ind;
        
        if (s.size() > t.size() || s.size() < t.size()) return false;
        
        for (int i = 0; i < s.size(); i++)
        {
            ind = t.find(s[i]);
            if (ind < 0)
            {
                return false;
            }
            else 
            {
                t.erase(ind,1);
            }
        }
        return true; 
    }
};