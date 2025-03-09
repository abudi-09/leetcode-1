class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  // Negative numbers are not palindromes

        int n = x, reversed = 0;
        while (n) {
            int d = n % 10;
            if (reversed > (INT_MAX - d) / 10) return false;  // Prevent overflow
            reversed = reversed * 10 + d;
            n /= 10;
        }

        return reversed == x;
    }
};
