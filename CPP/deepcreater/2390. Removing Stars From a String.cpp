#include <string>

class Solution {
public:
    string removeStars(string s) {
       string p;

        for (int i = 0; i < s.size(); i++)
            if (s[i] == '*' ) 
                p.pop_back(); 
            else 
                p += s[i];
 
        return p;
    }
};
