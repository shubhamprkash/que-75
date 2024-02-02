class Solution {
public:
    string reverseVowels(string s) {
        string ans;
        string samp;
        int a = 0;
        int ss = 0;
        for(int i=0; i<s.size();i++)
        {
            if(s[i] != 'a'  && s[i] != 'e'  && s[i] != 'i'  && s[i] != 'o'  && s[i] != 'u' &&
            s[i] != 'A'  && s[i] != 'E'  && s[i] != 'I'  && s[i] != 'O'  && s[i] != 'U')
             {
                 ans+= s[i];
                //  cout<<"hi";
             }
             else{
                
                 samp+=s[i];
                 ans+='*';
             }
        }
        cout<<ans<<" * "<<endl<<samp<<endl;
        ss = samp.size();
        for(int j = 0; j < s.size(); j++)
        {
            if(ans[j] == '*')
            {
                ans[j] = samp[ss-1];
                ss--;
            }
            else{
                ans[j]=s[j];
            }
        }
        return ans;
    }
};