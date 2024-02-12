class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int s=0, e=nums.size()-1;
        int ans=0;
       while(s<e)
        {
            if((nums[s]+nums[e])==k){
                ans++;
                s++;
                e--;
            }

            else if((nums[s]+nums[e])>k)
            {
                    e--;
            }
            else s++;
        }

        return ans;
    }
};
