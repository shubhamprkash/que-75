class Solution(object):
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        chars.append(" ")
        len_chars = len(chars)
        c_s_e = chars[0]
        output = []
        count = 1
        for i in range(1, len_chars):
            if chars[i] == c_s_e:
                count += 1
            elif count <= 1:
                output.append(c_s_e)
                c_s_e = chars[i]
                count = 1
            else:
                output.append(c_s_e)
                output.append(str(count))
                c_s_e = chars[i]
                count = 1
        
        output = ''.join(item for item in output)
        len_output = len(output)
        for i in range(len_output):
            chars[i] = output[i]
        return len_output