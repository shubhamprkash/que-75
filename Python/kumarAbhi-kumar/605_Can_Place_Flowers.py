class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        if n == 0:
            return True
        flowr_bed_space = len(flowerbed)
        output = False
        i = 0
        plantable_spaces = 0
        while i < flowr_bed_space:
            if flowerbed[i] == 0:
                if i == 0 or flowerbed[i - 1] == 0:
                    if i == flowr_bed_space - 1 or flowerbed[i + 1] == 0:
                        plantable_spaces += 1
                        if plantable_spaces >= n:
                            output = True
                            break
                        i += 2
                        continue
                i += 1
            else:
                i += 2
        return output