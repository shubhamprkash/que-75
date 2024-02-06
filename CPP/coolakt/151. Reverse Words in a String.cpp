class Solution {
public:
    string reverseWords(string s) {
     string temp="";
     stack<string> st;
     string ans="";
     for(int i=0; i<s.size(); i++){
         if(s[i]==' ')
         {
             if(temp!="")
             st.push(temp);
             temp="";
         }
         else
         temp+=s[i];
     }

     if(temp!="")
     {
         st.push(temp);
     }

     for(;!st.empty(); ){
         ans+=(st.top()+" ");
         st.pop();
     }
     ans.pop_back();

     return ans;
}

};
