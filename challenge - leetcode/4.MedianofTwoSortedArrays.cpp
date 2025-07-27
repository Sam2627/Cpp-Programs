// 4. Median of Two Sorted Arrays
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
// The overall run time complexity should be O(log (m+n)).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    // Normal thinking
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> merge = mergeArray(nums1, nums2);
        int leng = merge.size();

        if (leng % 2 == 0)
        {
            return (merge[leng / 2 - 1] + merge[leng / 2]) / 2.0;
        }
        else
        {
            return merge[leng / 2.0];
        }

        return 0;
    };

    // O(log (m+n))
    // Partition 2 array:
    double findMedianSortedArraysFast(vector<int> &nums1, vector<int> &nums2)
    {
        // Keep s1 is small or same size as s2
        if (nums1.size() > nums2.size())
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        int len1 = nums1.size(), len2 = nums2.size();
        // Set left and right pointer of partition
        int left = 0, right = len1;

        // Loop to partition
        // 1 3 7 8 9 10 11
        // 1 3 8 | 7 9 10 11
        while (left <= right)
        {
            // Divine partition into 2
            // part1 is begin of partition 1, start from left to right
            // part2 is begin of partition 2, start from right to left
            int part1 = (left + right) / 2;
            int part2 = (len1 + len2 + 1) / 2 - part1;

            // Set left right value of partition 1
            int leftP1 = (part1 == 0) ? INT_MIN : nums1[part1 - 1];
            int rightP1 = (part1 == len1) ? INT_MAX : nums1[part1];

            // Set left right value of partition 2
            int leftP2 = (part2 == 0) ? INT_MIN : nums2[part2 - 1];
            int rightP2 = (part2 == len2) ? INT_MAX : nums2[part2];

            // Check case: partitioned
            // Case 1: check left and right value of 2 partition, return answer
            if (leftP1 <= rightP2 && leftP2 <= rightP1)
            {
                // When sum elements in 2 arrays is even
                if ((len1 + len2) % 2 == 0)
                {
                    return (max(leftP1, leftP2) + min(rightP1, rightP2)) / 2.0;
                }
                // Sum elements is odd
                else
                {
                    return max(leftP1, leftP2);
                }
            }
            // Case 2: min of part 1 > max of part 2, reduce right of while loop check
            // Cause: nums1 elements > nums2 elements
            else if (leftP1 > rightP2)
            {
                right = part1 - 1;
            }
            // Case defualt: increase left of while loop check
            // Cause: nums1 elements < nums2 elements
            else
            {
                left = part1 + 1;
            }
        }

        return 0.0;
    }

    vector<int> mergeArray(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++)
        {
            result.insert(nums1.begin(), nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            result.insert(nums2.begin(), nums2[i]);
        }

        sort(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution sol;
    // vector<int> nums1 = {1, 3, 4, 5}, nums2 = {7, 9, 10, 11};
    vector<int> nums1 = {7, 9, 10}, nums2 = {1, 3, 4, 5};

    cout << sol.findMedianSortedArraysFast(nums1, nums2);

    return 0;
}