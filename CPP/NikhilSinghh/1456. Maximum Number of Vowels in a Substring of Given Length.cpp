class Solution {
   bool check(char x){
       char y=tolower(x);
       if(y=='a' || y=='e' || y=='i' || y=='o' || y=='u' )
       return 1;
       return 0;
    }
public:
    int maxVowels(string s, int k) {
        int m=0, i=0;
        for( ; i<k; i++){
            if(check(s[i]))
            m++;
        }
        int ans=m;
        for( i; i<s.size(); i++ ){
            if(check(s[i]))
            m++;
            if(check(s[i-k]))
            m--;
            
            ans=max(ans,m);
        }
        return ans;
        
    }
};




//   for(int z=i-k; z<=i; z++){
//                 cout<<s[z];
//             }
//             cout<<"  m  "<<m<<"   ans   "<<ans<<"\n";
