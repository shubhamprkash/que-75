class Solution {
public:
    bool isSubsequence(string s, string t)
       {
         int temp=0;
         int i=0;
         string a;
           for(int j=0;j<t.size();j++)
           {
           if(s[i]==t[j])
           i++;
            //  a+=s[i];
           }
        //    for(int i=0;i<s.size();i++)
           if(s.size()==i)
           return 1;
           return 0;
    }

};
