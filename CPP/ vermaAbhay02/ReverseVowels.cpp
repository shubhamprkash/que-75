class Solution {
public:
    string reverseVowels(string s) {

        int left=0;
        int right=s.length()-1;
        unordered_set<char> vowel={'a','A','e','E','i','I','o','O','u','U'};
        while(left<right){
              if(vowel.find(s[left])!=vowel.end()){
                  if(vowel.find(s[right])!=vowel.end()){
                      swap(s[left],s[right]);
                      right--;
                      left++;
                  }
                  else right--;
              }
              else left++;
            
        }
        return s;
    }
};
