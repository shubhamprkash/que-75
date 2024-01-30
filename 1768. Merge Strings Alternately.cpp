class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3="";
        int i=0;
        while(i<word1.size()  || i<word2.size()){
            if(i<word1.size()){
                word3+=word1[i];
            }
            if(i<word2.size()){
                word3+=word2[i];
            }i++;
        }
        return word3;
    }
};
