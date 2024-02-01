class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string common;
        int n = str1.length(), m = str2.length();
        int i = 0, j = 0;
        while(i < n && j < m && str1[i] == str2[j]) {
            common.push_back(str1[i]);
            i++; j++;
        }
        i++; j++;
        common.push_back('0');
        while(i > 0) {
            i--; j--;
            common.pop_back();
            int g = i, c = 0;
            int ci = i, cj = j;
            if(g == 0)
                continue;
            while(ci < n && str1[ci] == common[c]) {
                ci++; c++;
                if(c == g)
                    c = 0;
            }
            if(ci < n || c != 0)
                continue;
            
            while(cj < m && str2[cj] == common[c]) {
                cj++; c++;
                if(c == g)
                    c = 0;
            }
            if(cj < m || c != 0)
                continue;
            
            return common;
        }
        return "";
    }
};
