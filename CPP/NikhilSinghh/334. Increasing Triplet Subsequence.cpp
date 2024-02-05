class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                if (nums[i] < nums[j]) {
                    for (int k = j + 1; k < n; ++k) {
                        if (nums[j] < nums[k]) {
                            return true; 
                        }
                    }
                }
            }
        }
        
        return false; 
    }
};


//Above solution is right but its not an optimum solution, time comlexiity is too high thats why its giving "Time Limit Exceeded (76 / 83 testcases passed)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int FirstMinimumValue = INT_MAX, SecondMinimumValue = INT_MAX;
        if(nums.size()<3)   return false;
        for(int& num : nums){
            if(num <= FirstMinimumValue)  FirstMinimumValue = num;
            else if(num <= SecondMinimumValue)  SecondMinimumValue = num;
            else    return true;
        }
        return false;
    }
};
