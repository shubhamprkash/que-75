class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zeroP, numP, lenNums = 0, 0, len(nums)
        while (True):
            while(zeroP < lenNums and nums[zeroP] != 0):
                zeroP = zeroP + 1
            if zeroP >= lenNums-1:
                break
            if numP <= zeroP:
                numP = zeroP + 1 
            while numP < lenNums and nums[numP] == 0:
                numP += 1
            if numP >= lenNums:
                break
            nums[zeroP], nums[numP] = nums[numP], nums[zeroP]
            zeroP += 1
            numP += 1
            if numP >= lenNums:
                break