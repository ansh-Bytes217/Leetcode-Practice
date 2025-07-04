class Solution {
public:
    bool isPalindrome(int x) {
        // Negative number is not a palindrome.
        // Numbers ending in 0 are not the palindromes unless the number is 0 itself.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;

        // Reverse half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Check for both even and odd digit counts
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};
