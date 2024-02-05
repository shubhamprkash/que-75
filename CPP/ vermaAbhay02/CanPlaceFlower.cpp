class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1 && flowerbed[0] == 0)
            return n <= 1;

        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                if (i == 0) { 
                    if (i + 1 < flowerbed.size() && flowerbed[i + 1] == 0) {
                        n--;
                        i++;
                    }
                } else if (i == flowerbed.size() - 1) { 
                    if (flowerbed[i - 1] == 0) {
                        n--;
                    }
                } else { 
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                        n--;
                        i++; 
                    }
                }
            }
        }
        return n <= 0; 
    }
};
