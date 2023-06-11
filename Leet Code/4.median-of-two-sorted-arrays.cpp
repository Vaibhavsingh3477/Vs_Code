/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is smaller or equal in size compared to nums2
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int imin, imax, partitionX, partitionY;
        
        // Binary search on the smaller array (nums1)
        imin = 0;
        imax = m;
        while (imin <= imax) {
            partitionX = (imin + imax) / 2;
            partitionY = (m + n + 1) / 2 - partitionX;
            
            int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            
            int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];
            int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];
            
            if (maxX <= minY && maxY <= minX) {
                // Found the correct partition point
                if ((m + n) % 2 == 0) {
                    // Even number of elements
                    return (max(maxX, maxY) + min(minX, minY)) / 2.0;
                } else {
                    // Odd number of elements
                    return max(maxX, maxY);
                }
            } else if (maxX > minY) {
                // Move partitionX to the left
                imax = partitionX - 1;
            } else {
                // Move partitionX to the right
                imin = partitionX + 1;
            }
        }
        
        // Arrays are not sorted, return an error value
        return -1;
    }
};

// @lc code=end

