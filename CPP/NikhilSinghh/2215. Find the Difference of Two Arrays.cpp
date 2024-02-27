class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        set<int> temp, temp2;
       // pair<int><int> p;
        for(int i=0; i<nums1.size(); i++){
            int flag=1;
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    flag--;
                }
            }
            if(flag==1){
             temp.insert(nums1[i]);  
            }
        }

         for(int i=0; i<nums2.size(); i++){
            int flag=1;
            for(int j=0; j<nums1.size(); j++){
                if(nums2[i]==nums1[j]){
                    flag--;
                }
            }
            if(flag==1){
             temp2.insert(nums2[i]); 
            }
        }
        for(auto i: temp)
            ans[0].push_back(i);
        
          for(auto i: temp2)
            ans[1].push_back(i);

     return ans;   
    }
};
