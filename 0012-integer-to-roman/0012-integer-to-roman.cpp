class Solution {
public:
    string intToRoman(int num) {
        char symbols[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        string out = "";
        int i = 1000;
        int j = 0;
        while (i > 0) {
            int digit = (num - num % i) / i;
            num -= (digit * i);

            i /= 10;
            
            if (digit <= 3) {
                out += string(digit, symbols[j]);
            } else if (digit == 4) {
                out += symbols[j];
                out += symbols[j - 1];
            } else if (digit <= 8) {
                out += symbols[j - 1] + string(digit - 5, symbols[j]);
            } else {
                out += string(10 - digit, symbols[j]) + symbols[j - 2];
            }

            j += 2;
        }
        return out;
    }
};