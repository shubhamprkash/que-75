

/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
  let p1 = 0;
  let p2 =0;
  let len1 = word1.length;
  let len2 = word2.length;
  let finalStr = "";

  while(p1 < len1 || p2 < len2)
  {
      if(p1 < len1){
          finalStr += word1[p1];
          p1++;
      }
      if(p2 < len2){
          finalStr += word2[p2];
          p2++;
      }
  }
  return finalStr;
};
