class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> subarray(k);
        long long sum = 0;
        long long maxSum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        maxSum = sum;
        for (int i = 1; i <= n - k; i++) {
            sum += nums[i + k - 1] - nums[i - 1]; 
            maxSum = max(maxSum, sum); 
        }

        return static_cast<double>(maxSum) / k;
    }
};
