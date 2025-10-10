class Solution {
public:
    vector<int> differenceSorted(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                result.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        while (i < nums1.size()) {
            result.push_back(nums1[i]);
            i++;
        }
        return result;
    }
};
