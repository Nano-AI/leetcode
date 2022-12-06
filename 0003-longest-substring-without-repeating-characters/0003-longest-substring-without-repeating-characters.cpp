class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int greatest = 0;
    int s_len = s.length();
    for (int i = 0; i < s_len; i++) {
        string total_string = "";

        for (int j = 0; j < s_len - i; j++) {
            if (total_string.find(s[i + j]) != string::npos) {
                break;
            }

            total_string += s[i + j];
        }

        int str_len = total_string.length();

        if (str_len > greatest) {
            greatest = str_len;
        }
    }
    return greatest;
    }
};