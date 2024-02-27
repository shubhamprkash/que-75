class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
          int leftsum=0,rightsum=0;

          for(int j=0;j<i;j++) {
            if(i==0) break;
            leftsum=leftsum+nums[j];
          }
          

          for(int j=i+1;j<n;j++)
          {
            if(i == n-1) break;
            rightsum=rightsum+nums[j];
          }
        

          if(leftsum == rightsum)
          return i;
      }
      return -1;
    }
};
