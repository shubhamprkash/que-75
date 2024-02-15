class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f=0;
        int l=0;
        int z=s.size();
        while(f<=s.size() && l<=t.size()){
            if(s[f]==t[l]){
                f++;
                l++;
                z--;
            }
            else{
                l++;
            }
        }
        if(z<=0){
            return true;
        }
        return false;
    } 
};
