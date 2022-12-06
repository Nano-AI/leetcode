class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1) {
        if ((flowerbed[0] == 0 && n == 1) || n == 0)
            return true;
        return false;
    }
    int placeable = 0;
    vector<int> dup = flowerbed;
    for (int i = 0; i < dup.size(); i++) {
        if (i > 0 && i < dup.size() - 1 && dup[i] == 0 && dup[i - 1] == 0 && dup[i + 1] == 0) {
            placeable += 1;
            dup[i] = 1;
        }
        else if (i == 0 && dup[i] == 0 && dup[i + 1] == 0) {
            placeable += 1;
            dup[i] = 1;
        }
        else if (i == dup.size() - 1 && dup[i] == 0 && dup[i - 1] == 0) {
            placeable += 1;
            dup[i] = 1;
        }
    }
    if (placeable >= n)
        return true;
    return false;
    }
};