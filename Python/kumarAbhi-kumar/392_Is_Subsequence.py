class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        len_t = len(t)
        len_s = len(s)
        if len_s == 0:
            return True
        s_cl_i = 0 # substring current looking index
        for i in range(len_t):
            if s_cl_i == len_s:
                return True
            elif t[i] == s[s_cl_i]:
                s_cl_i += 1
        return True if s_cl_i == len_s else False