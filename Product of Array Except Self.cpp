class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int i=0;
      int prod=1;
      int isZero=0;
      while(i<nums.size()){
          if(nums[i]!=0){
          prod=prod*nums[i];
          }
          else isZero++;

          i++;
      }
      i=0;
      while(i<nums.size()){
          if(!isZero){
              nums[i]=prod/nums[i];
          }
          else{
              if(nums[i]!=0){
                  nums[i]=0;
              }
              else if(isZero==nums.size()){
                  nums[i]=0;
              }
              else{
                  nums[i]=prod;
              }
          }
          i++;
      }
    return nums;
      
    }
};
