
class Solution {
public:
    string removeStars(string s) {
        stack<char> ans;
        for (char c : s) {
            if (!ans.empty() && c == '*') {
                ans.pop(); 
            } else {
                ans.push(c); 
            }
        }
        
        string result;
        while (!ans.empty()) {
            result += ans.top();
            ans.pop();
        }
         
         reverse(result.begin(), result.end());
   
        return result;
     }
};
