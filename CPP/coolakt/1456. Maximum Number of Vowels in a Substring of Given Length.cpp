class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int mexi=0;
        for(int i=0; i<k; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count+=1;
            }
        }
        mexi=max(count,mexi);
        for(int j=k; j<s.size(); j++){
            
            if(s[j-k]=='a' || s[j-k]=='e' || s[j-k]=='i' || s[j-k]=='o' || s[j-k]=='u'){
                count-=1;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count+=1;
            }
            mexi=max(count,mexi);
        }
        return mexi;
    }
};
