class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='*')
                st.push(s[i]);
            else 
                st.pop();
        }

        string ans="";
       while(!st.empty())
             {
                 char c = st.top();
                ans+=c;  // ans = ans+c; 
                // ans = c + ans; 
                 st.pop();
             }

    string ans2;
    for(int i=ans.size()-1; i>=0; i--){
       if(ans[i]>='a' && ans[i]<='z')
        ans2+=ans[i];
    }

    return  ans2;//reverse(ans);//ans;
        
    }
};
