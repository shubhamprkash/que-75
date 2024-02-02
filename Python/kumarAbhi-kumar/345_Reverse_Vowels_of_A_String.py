class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        s_list = list(s)
        len_s_list = len(s_list)
        left = 0
        right = len_s_list - 1
        v_list = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        while left < right:
            while left < len_s_list and s_list[left] not in v_list:
                left += 1
            while right >= 0 and s_list[right] not in v_list:
                right -= 1
            if left < right:
                s_list[left], s_list[right] = s_list[right], s_list[left]
                left += 1
                right -= 1
        s = ''.join(s_list)
        return s