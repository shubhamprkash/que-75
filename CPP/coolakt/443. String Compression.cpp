class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1)
            return n;

        int writeIdx = 0;
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && chars[i] == chars[i - 1]) {
                count++;
            } else {
                chars[writeIdx++] = chars[i - 1];
                if (count > 1) {
                    string countStr = to_string(count);
                    for (char c : countStr) {
                        chars[writeIdx++] = c;
                    }
                }
                count = 1;
            }
        }
        return writeIdx;
    }
};
