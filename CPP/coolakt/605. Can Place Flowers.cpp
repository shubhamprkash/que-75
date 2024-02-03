class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i]==1){
                i++;
            }
            else{
                if((i==flowerbed.size()-1 || flowerbed[i+1] == 0) && (i == 0 || flowerbed[i-1]==0)){
                    flowerbed[i]=1;
                    n--;
                    i++;
                }
            }

        }
        if(n<=0){
            return 1;
        }
        else{
            return 0;
        }
    }
};
