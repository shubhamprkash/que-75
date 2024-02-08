class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candie=0;
        for(int i =0; i<candies.size(); i++){
            if(candies[i]>max_candie)
                max_candie=candies[i];
            
        }
        vector<bool> ans(candies.size());
        for(int j=0; j<candies.size(); j++){
            if(candies[j]+ extraCandies >= max_candie){
                ans[j]= true;
            }
            else{
                ans[j]=false;
            }
        }
        return ans;
    }
};
