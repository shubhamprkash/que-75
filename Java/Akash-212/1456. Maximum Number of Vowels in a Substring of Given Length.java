class Solution {
    public int maxVowels(String s, int k) {
         String vowels = "aeiou";
        int max = 0;
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (vowels.indexOf(s.charAt(i)) != -1) {
                count++;
            }
        }
        max = count;
        for (int i = k; i < s.length(); i++) {
            char outgoingChar = s.charAt(i - k);
            char incomingChar = s.charAt(i);
            
            if (vowels.indexOf(outgoingChar) != -1) {
                count--;
            }
            if (vowels.indexOf(incomingChar) != -1) {
                count++;
            }
            
            max = Math.max(max, count);
        }

        return max;
    }
}
