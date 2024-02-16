class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        firstPoll = 0
        secondPoll = len(height) - 1
        maxVolume = 0
        while(firstPoll < secondPoll):
            tempVolume = min(height[firstPoll], height[secondPoll]) * (secondPoll - firstPoll)
            maxVolume = max(tempVolume, maxVolume)  
            if height[firstPoll] <= height[secondPoll]:
                firstPoll += 1
            else:
                secondPoll -= 1 
        return maxVolume