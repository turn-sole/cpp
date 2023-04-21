class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) {
            return true;
        }
        else if (x < 0) {
            return false;
        }
        else {
            int temp = x, dx = 0, k = 0;
            if (x < 10)return true;
            while (temp / 10) {
                k = temp % 10;
                temp = temp / 10;
                dx = dx * 10 + k;
            }
            if ((x / 10) == dx) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};