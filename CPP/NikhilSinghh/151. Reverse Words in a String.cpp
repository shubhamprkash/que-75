class Solution {
public:
    string reverseWords(string s) {

        int cnt=0,cntb=0;
        string res="";
        string w=" ";
        reverse(s.begin(),s.end());
         s+=w;
          reverse(s.begin(),s.end());
         w="";
        for(int i=s.size()-1;i>=0;i--){
            if(cnt==0 && s[i]==' '){

            }
            else if(cnt==0 && s[i]!=' '){
                cnt=1;
                w+=s[i];
                cntb=0;
            }
            else if(cnt==1 && s[i]!=' '){
                if(cntb==1){
                    w=" ";
                    res+=w;
                    w="";
                }
                w+=s[i];
                cntb=0;
            }
            else if(cnt==1 && s[i]==' '){
             reverse(w.begin(),w.end());
             res+=w;
             w=""; 
             cntb=1;
            }
           /* else{
                reverse(w.begin(),w.end());
                res+=w;
            }
           /* else if(cnt==1 && cntb==1 && s[i]!=' '){
                w=" ";
                res+=w;
            }*/
        }
        return res;
    }
};


//Below the codes are with stack

// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans="",temp="";
//         stack<string> st;
//         int p=0;

//         for(int i=0; i<s.size(); i++){
//             char x=s[i];
//              if(x==' '){
//                  if (!temp.empty())
//                      st.push(temp+" ");
                        
//                  temp="";
//                  p=i;
//              }
//               else
//                temp+=x; 
//         }
//         if (!temp.empty())
//             st.push(temp+" ");

//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         if (!ans.empty())
//             ans.pop_back();
//         return ans;
//     }
// };


// class Solution {
// public:
//     string reverseWords(string s) {  
//        string temp = "";
//        stack<string>st;
//        for(int i=0; i<s.size();i++){
//            char ch = s[i];
//            if(ch == ' '){
//                if(temp != "")
//                    st.push(temp);
//                temp = "";
//            }
//          else
//             temp+=ch;
//        }

//        if(temp!=""){
//            st.push(temp);
//        }
//        string ans = "";

//        while(!st.empty()){
//            ans+=(st.top()+" ");
//            st.pop();
//        }
//        ans.pop_back();
//        return ans;
//     }

// };



// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans="",temp="";
//         stack<string> st;
//         int p=0;

//         for(int i=0; i<s.size(); i++){
//             char x=s[i];
//              if(x==' '){
//                  st.push(temp+" "); 
                        
//                  temp="";
//                  p=i;
//              }
//               else
//                temp+=x; 
//         }
//         st.push(temp+" ");

//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//        // for(int i=0; i<)
//         ans.pop_back();
//         return ans;
       
//     }
// };




