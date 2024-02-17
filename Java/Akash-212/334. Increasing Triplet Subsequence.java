class Solution {
    public boolean increasingTriplet(int[] nums) {
        if (nums.length < 3)
            return false;
        
        int minVal = Integer.MAX_VALUE;
        int midVal = Integer.MAX_VALUE;
        
        for (int num : nums) {
            if (num <= minVal) {
                minVal = num;
            } else if (num <= midVal) {
                midVal = num;
            } else {
                return true;
            }
        }
        
        return false;
    }
}
