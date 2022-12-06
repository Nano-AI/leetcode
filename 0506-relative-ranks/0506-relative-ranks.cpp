class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> o(score.size(), "");
        int c = 0;
        while (c < score.size()){
            int max = distance(score.begin(), max_element(score.begin(), score.end()));
            // for (int i = 0; i < o.size(); i++) {
            //     cout << o[i] << ", ";
            // }
            // cout << endl;
            // cout << max << " " << c << endl;
            if (c == 0) {
                o[max] = "Gold Medal";
            } else if (c == 1) {
                o[max] = "Silver Medal";
            } else if (c == 2) {
                o[max] = "Bronze Medal";
            } else {
                o[max] = to_string(c + 1);
            }
            score[max] = -1;
            // score.erase(score.begin() + max);
            c++;
        }
        return o;
    }
};