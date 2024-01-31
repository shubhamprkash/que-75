class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        str3 = ""
        output = ""
        matchFound = True
        if len(str1) >= len(str2):
            ms = str1
            ss = str2
        else:
            ms = str2
            ss = str1
        for i in range(0, len(ms), len(ss)):
            if matchFound != False:
                for j in range(len(ss)):
                    if i + j < len(ms):
                        if ms[i+j] != ss[j]:
                            matchFound = False
                            break
                    
                    elif j < len(ss):    
                        str3 += ss[j]
                        j += 1
        if(str3 != ""):
            output = self.gcdOfStrings(ss, str3)
            if(output == ""):
                matchFound = False
        if matchFound == True and len(output) == 0:
            output = ss
        return output
        