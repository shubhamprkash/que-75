public class Solution {
    public String gcdOfStrings(String str1, String str2) {
        if (str1.equals(str2)) {
            return str1;
        }

        String result = "";
        char[] letters1 = str1.toCharArray();
        char[] letters2 = str2.toCharArray();

        for (int wordLength = 1; wordLength <= Math.min(str1.length(), str2.length()); wordLength++) {
            char[] substring = Arrays.copyOfRange(letters1, 0, wordLength);

            if (str1.length() % substring.length != 0 || str2.length() % substring.length != 0) {
                continue;
            }
            if (!chunksMatch(letters1, substring) || !chunksMatch(letters2, substring)) {
                continue;
            }

            result = new String(substring);
        }

        return result;
    }

    private boolean chunksMatch(char[] letters, char[] substring) {
        int chunkSize = substring.length;
        for (int i = 0; i < letters.length; i += chunkSize) {
            char[] chunk = Arrays.copyOfRange(letters, i, i + chunkSize);
            if (!Arrays.equals(chunk, substring)) {
                return false;
            }
        }
        return true;
    }
}
