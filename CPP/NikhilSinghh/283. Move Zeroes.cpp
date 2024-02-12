class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                std::swap(nums[i], nums[j]);
                i++;
            }
        }
        
        // for (int k = i; k < n; k++) {
        //     nums[k] = 0;
        // }
    }
};
