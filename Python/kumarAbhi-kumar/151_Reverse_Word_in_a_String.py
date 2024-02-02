class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s+=' '
        temp = ""
        output = ""
        len_s = len(s)
        for i in range(len_s):
            if s[i] != " ":
                temp += s[i]
            elif temp != "":
                output = temp + ' ' + output
                temp = ""
        output = output[:-1]
        return output