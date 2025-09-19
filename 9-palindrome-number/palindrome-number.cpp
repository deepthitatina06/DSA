class Solution {
public:
    bool isPalindrome(int x) {
        // Negative or multiples of 10 (except 0) cannot be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int revHalf = 0;
        while (x > revHalf) {
            revHalf = revHalf * 10 + x % 10;
            x /= 10;
        }

        // For even digits: x == revHalf
        // For odd digits: x == revHalf/10 (middle digit ignored)
        return (x == revHalf || x == revHalf / 10);
    }
};
