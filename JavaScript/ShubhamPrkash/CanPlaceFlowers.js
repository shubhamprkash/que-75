/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function(flowerbed, n) {
if (n == 0) return true;
    if (flowerbed.length == 1) return flowerbed[0] == 0;
    
    let availablePlots = 0;
    for (i = 0; i < flowerbed.length; i++) {
        if (flowerbed[i] == 0) {
            if (i == 0) {
                if (flowerbed[i+1] == 0) {
                    flowerbed[i] = 1;
                    availablePlots++;
                }
            } 
            else if (i == flowerbed.length -1) {
                if (flowerbed[i-1] == 0) {
                    flowerbed[i] = 1;
                    availablePlots++;
                }
            }
            else {
                if (flowerbed[i+1] == 0 && flowerbed[i-1] == 0) {
                    flowerbed[i] = 1;
                    availablePlots++;
                }
            }
        }
    }
    return availablePlots >= n;
};
