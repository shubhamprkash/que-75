class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        output[0] = 1;
        for(int i=1; i<n; i++){
            output[i] = output[i-1] * nums[i-1];
        }
        int right = 1;
        for(int i=n-1; i>=0; i--){
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};

// time complexity with O^2 and TLE
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//             vector<int> ans;
            
//             for(int i=0; i<nums.size(); i++){
//                 int p=1;
//                 for(int j=0; j<nums.size(); j++){
//                     if(i!=j)
//                     p*=nums[j];
//                 }
//                 ans.push_back(p);
//             }
//             return ans;
        
//     }
// };











// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
      
//        int n=nums.size();
//         vector<int> v1(n);
//         vector<int> v2(n);
//         vector<int> ans(n);
//         v1[0]=1;
//         v2[n-1]=1;
//         for(int i=1; i<n; i++)
//         {
//             v1[i]=nums[i-1]*v1[i-1];
//         }

//         for(int j=n-2; j>=0; j--)
//         {
//              v2[j]=nums[j+1]*v2[j+1];
//         }
           

     
//         for(int i=0; i<n; i++)
//         {
//             ans[i]=v1[i]*v2[i];
//         }
//         return ans;
        
//     }
// };
