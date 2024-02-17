class Solution {
    public String reverseWords(String s) {
      String[] words = s.trim().split("\\s+");
        List<String> reversedWords = Arrays.asList(words);
        Collections.reverse(reversedWords);
        return String.join(" ", reversedWords);  
    }
}
