class Solution:
    def mergeAlternately(self, word1, word2):
        i=0
        res = []
        while i < len(word1) and i < len(word2):
            res.append(word1[i])
            res.append(word2[i])
            i+=1
            #j+=1
        res.append(word1[i:])
        res.append(word2[i:])    
        return "".join(res) 
           
      
