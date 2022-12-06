class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size() - 1;
        int length = 0;
        bool still_string = true;
        for (int i = size; i >= 0; i--) {
            if (still_string && s[i] != ' ') still_string = false;
            if (!still_string && s[i] == ' ') return length;
            if (!still_string) length ++;
        }
        return length;
    }
};