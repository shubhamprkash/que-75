class Solution {
    public double findMaxAverage(int[] arr, int k) {
        // int n=arr.length;
        // double max = 0;
        // double maximum = 0;
        // double result;
        // int update = n - k;
        // if (n == 1) {
        //     max += arr[0];
        //     return max;
        // } else {
        //     for (int i = 0; i <= update; i++) {
        //         for (int j = i; j <= i + k-1; j++) {
        //             max += arr[j];
        //         }
        //         result = max / k;
        //         maximum = Math.max(maximum, result);
        //         result = 0;
        //         max = 0;
        //     }
        //     return maximum;
        // }
          int n = arr.length;
        double max = 0;
        double maximum = Double.NEGATIVE_INFINITY; // Initialize to smallest possible value
        double result;
        int update = n - k;
        if (n == 1) {
            max += arr[0];
            return max;
        } else {
            for (int i = 0; i <= update; i++) {
                if (i == 0) {
                    for (int j = 0; j < k; j++) {
                        max += arr[j];
                    }
                } else {
                    max = max - arr[i - 1] + arr[i + k - 1];
                }
                result = max / k;
                maximum = Math.max(maximum, result);
            }
            return maximum;
        }
    }
}
