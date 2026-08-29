class Solution {
public:
    int reverse(int x) {
        long int reverse = 0;

        if (x > 0) {
            while (x > 0) {
                int digit = x % 10;
                reverse = 10 * reverse + digit;
                x = x / 10;
            }
        } else {
            long long n = -(long long)x;
            while (n > 0) {
                int digit = n % 10;
                reverse = 10 * reverse + digit;
                n = n / 10;
            }
            reverse=-reverse;

        }
        if (reverse > INT_MAX || reverse < INT_MIN) {
            return 0;
        }
        return reverse;
    }
};