class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
	for (int i = 0; i < nums1.size(); i++) {
	    merged.push_back(nums1[i]);
	}
	for (int i = 0; i < nums2.size(); i++) {
	    merged.push_back(nums2[i]);	    
	}
	sort(merged.begin(), merged.end());
	int size = merged.size();
	if (size % 2 != 0) {
	    return merged[(size / 2) + 0.5];
	}
	return (double)(merged[(size / 2) - 1] + merged[size / 2]) / (double) 2;
    }
};