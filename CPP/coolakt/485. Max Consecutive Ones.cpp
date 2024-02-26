class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int mexi=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }
            else {
                mexi=max(count,mexi);
                count=0;
            }
        }
        mexi=max(count,mexi);
        return mexi;
    }
};
