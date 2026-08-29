class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse = 0;
        int original = x;
        while (x > 0) {
            int digit = x % 10;
            reverse = 10 * reverse + digit;
            x = x / 10;
        }
        if (reverse == original) {
            return true;
        }
        return false;
    }
};