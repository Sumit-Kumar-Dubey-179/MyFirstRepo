#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            bool alreadyPresent = false;
            for (int k = 0; k < result.size(); k++) {
                if (result[k] == nums1[i]) {
                    alreadyPresent = true;
                    break;
                }
            }
            if (!alreadyPresent) {
                result.push_back(nums1[i]);
            }
        }
        for (int j = 0; j < nums2.size(); j++) {
            bool alreadyPresent = false;
            for (int k = 0; k < result.size(); k++) {
                if (result[k] == nums2[j]) {
                    alreadyPresent = true;
                    break;
                }
            }
            if (!alreadyPresent) {
                result.push_back(nums2[j]);
            }
        }

        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 3, 4};
    vector<int> ans = s.unionArray(nums1, nums2);
    cout << "Union elements: ";
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
