class Solution {
public:
    int myAtoi(string s) {
        if (s[0] != ' ' && s[0] != '+' && s[0] != '-' && !isdigit(s[0]))
            return 0;
        string number = "";
        char symbol = ' ';
        
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] == '+' || s[i] == '-') && number == "") {
                if (symbol == ' ')
                    symbol = s[i];
                else
                    break;
                if (number != "")
                    break;
            } else {
                if ((!isdigit(s[i]) && s[i] != ' ') || (s[i] == ' ' && symbol != ' ') || (s[i] == ' ' && number != ""))
                    break;
                if (s[i] != ' ')
                    number += s[i];   
            }
        }
        
        if (number == "")
            return 0;
        
        try {
            if (symbol == '-')
                return stoi(number) * -1;
            return stoi(number);     
        } catch (const std::out_of_range& e) {
            if (symbol == '-')
                return -2147483648;
            return 2147483647;
        }
    }
};