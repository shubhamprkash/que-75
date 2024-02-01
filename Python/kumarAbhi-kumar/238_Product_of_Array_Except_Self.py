class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        output = []
        for i in range(len(nums)):
            if i == 0:
                output.append(1)
            elif i == 1:
                output.append(nums[i-1])
            else:
                output.append(nums[i-1] * output[i-1])
        temp = 0
        holder = 0
        for i in reversed(range(len(nums))):
            if i == len(nums) - 1:
                holder = nums[i]
                nums[i] = 1
            elif i == len(nums) - 2:
                temp = nums[i]
                nums[i] = holder
                holder = temp
            else:
                temp = nums[i]
                nums[i] = holder * nums[i+1]
                holder = temp
        for i in range(len(output)):
            output[i] = output[i] * nums[i]
        return output