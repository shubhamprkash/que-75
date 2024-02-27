class Solution {
    public int largestAltitude(int[] arr) {
       int altitude = 0;
        int maxAltitude = 0;

        for (int i = 0; i < arr.length; i++) {
            altitude += arr[i];
            maxAltitude = Math.max(maxAltitude, altitude);
        }

        return maxAltitude;
    }
}
