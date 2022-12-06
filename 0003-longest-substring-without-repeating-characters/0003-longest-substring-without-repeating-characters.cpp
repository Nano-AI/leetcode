class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> substrings;

        for (int i = 0; i < s.length(); i++) {
            string total_string = "";

            for (int j = 0; j < s.length() - i; j++) {
                if (total_string.find(s[i + j]) != string::npos) {
                    break;
                }

                total_string += s[i + j];
            }

            substrings.push_back(total_string.length());
        }
        int greatest = 0;

        for (int i = 0; i < substrings.size(); i++) {
            if (substrings[i] > greatest) {
                greatest = substrings[i];
            }
        }

        return greatest;
    }
};