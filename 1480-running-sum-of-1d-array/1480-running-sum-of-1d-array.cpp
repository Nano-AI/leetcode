class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> o = {};
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            o.push_back(sum);
        }
        return o; 
    }
};