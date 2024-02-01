class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        highestCandies = candies[0]
        for i in range(len(candies)):
            if highestCandies < candies[i]:
                highestCandies = candies[i]
        for i in range(len(candies)):
            candies[i] =  True if candies[i] + extraCandies >= highestCandies else False
        return candies