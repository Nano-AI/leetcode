class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        unsigned long long number = 0;
        unsigned long long dup = x;
        do {
            number *= 10;
            number += dup %10;
        } while (dup/=10);
        if (x == number)
            return true;
        return false;
    }
};