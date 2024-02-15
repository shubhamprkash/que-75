class Solution {
public:
	int maxOperations(vector<int>& nums, int k) {
		unordered_map<int, int> m;
		int ans = 0;
		for(int i = 0; i < nums.size(); i++){
			if(m[k - nums[i]] > 0){
			   m[k - nums[i]]--;
				ans++;
			}
			else{
				m[nums[i]]++;
			}
		}
		return ans;
	}
};
