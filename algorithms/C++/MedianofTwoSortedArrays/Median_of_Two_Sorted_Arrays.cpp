#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size();
    int n = nums2.size();

    if (m > n) {
        swap(nums1, nums2);
        swap(m, n);
    }

    int left = 0, right = m;
    int partition1, partition2;
    int maxLeft1, maxLeft2, minRight1, minRight2;
    while (left <= right) {
        partition1 = (left + right) / 2;
        partition2 = (m + n + 1) / 2 - partition1;

        maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
        
        maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
        
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((m + n) % 2 == 0) {
                return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
            } else {
                return max(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = partition1 - 1;
        } else {
            left = partition1 + 1;
        }
    };
    return 0;
}
};
