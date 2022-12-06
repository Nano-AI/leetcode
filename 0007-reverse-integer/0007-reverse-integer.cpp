class Solution {
public:
    int reverse(int x) {
        /*
        if (x < -2147483648 || x > 2147483647) {
        return 0;
    }*/
    long out = 0;
    long iterate = x;
    while (iterate != 0) {
        out *= 10;
        out += iterate % 10;
        iterate /= 10;
    }
    if (out < -2147483648 || out > 2147483647) {
        return 0;
    }
    return out;
    }
};