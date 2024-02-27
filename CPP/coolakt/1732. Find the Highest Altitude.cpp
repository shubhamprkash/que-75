class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int alt=0;
       int hgtalt=0;
       for(int i=0; i<gain.size(); i++){
           alt=alt+gain[i];
           hgtalt=max(alt,hgtalt);
       } 
       return hgtalt;
    }
};
