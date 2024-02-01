class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        len_word1 = len(word1)
        len_word2 = len(word2)
        left, right = 0, 0
        output = ""
        while left < len_word1 and right < len_word2:
            output += word1[left]
            output += word2[right]
            left += 1
            right += 1
        while left < len_word1:
            output += word1[left]
            left += 1
        while right < len_word2:
            output += word2[right]
            right += 1
        return output