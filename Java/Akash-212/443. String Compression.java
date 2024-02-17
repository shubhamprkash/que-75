class Solution {
    public int compress(char[] chars) {
        if (chars == null || chars.length == 0) {
            return 0;
        }

        StringBuilder sb = new StringBuilder();

        int count = 1;

        for (int i = 0; i < chars.length; i++) {
            
            if (i + 1 < chars.length && chars[i] == chars[i + 1]) {
                count++;
            } else {
              
                sb.append(chars[i]);
            
                if (count > 1) {
                    sb.append(count);
                }
                
                count = 1;
            }
        }

        char[] compressedChars = sb.toString().toCharArray();
        System.arraycopy(compressedChars, 0, chars, 0, compressedChars.length);
        return compressedChars.length;
    }
}
