class Solution {
    public int maxArea(int[] height) {
        //  int maxArea = 0;

        //  for (int i = 0; i < height.length - 1; i++) {
        //      for (int j = i + 1; j < height.length; j++) {
        //          int minHeight = Math.min(height[i], height[j]);
        //          int width = j - i;
        //          int area = minHeight * width;
        //          maxArea = Math.max(maxArea, area);
        //      }
        //  }

        //  return maxArea;
        int maxArea = 0;
        int left = 0;
        int right = height.length - 1;

        while (left < right) {
            int minHeight = Math.min(height[left], height[right]);
            int width = right - left;
            int area = minHeight * width;
            maxArea = Math.max(maxArea, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
}
