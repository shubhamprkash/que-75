class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, prev_length = 0, curr_length = 0;
        bool no_zeroes = true;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                curr_length += 1;
            }
            else{
                no_zeroes = false;
                prev_length = curr_length;
                curr_length = 0;
            }
            ans = max(ans, prev_length + curr_length);
        }
        if(no_zeroes){
            return nums.size()-1;
        }
        return ans;
    }
};


// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int z=0,c=0, m=0;
//         for(int i=0; i<nums.size(); i++){
           
//             if(nums[i]==1)
//                 c++;
//             if(nums[i]==0){
//                 z++;
//             }
//             if(z>1){
//                 // m=max(m,c);
//                 z--;
                
//                 m;
//             }
           
//              m=max(m,c);
//               cout<<i<<" m "<<m<<" c " <<c<<" z "<<z<<endl;
//         }
//         m=max(m,c);
//         return m;
//     }
// };
