class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
      int a=0, b=k, sum=0, maxSum=0;
      for(int i=0; i<k; i++)
      sum+=n[i];
      maxSum=sum;
     // maxSum+=n[i];
       // sum=maxSum;
        for(int i=k; i<n.size(); i++){
                sum+=n[i];
                sum-=n[i-k];
                maxSum = max(maxSum, sum);
                    
                }
               // cout<<" SUM is "<<sum<<" ";             
        
        
        return (double)maxSum/k;
    }
};
 



// class Solution {
// public:
//     double findMaxAverage(vector<int>& n, int k) {
//       int a=0, b=k, sum=0, maxSum=n[0];
//         for(int i=0; i<=n.size()-k; i++){
//                 for(int j=i; j<i+k; j++){
//                     sum+=n[j];
//                     cout<<n[j]<<" + ";
                    
//                 }
//               //  cout<<" SUM is "<<sum<<" ";
//                 maxSum = max(maxSum, sum);
//                 sum=0;
//         }
        
//         return (double)maxSum/k;
//     }
// };
