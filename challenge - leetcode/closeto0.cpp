// 2239. Find Closest Number to Zero
// Find number closest to zero in a array
// If have 2 numbers have same distance get non-negative

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findClosestNumber(const vector<int> &nums)
    {
        // Set defualt closest at first index
        int closest = nums[0];
        // Loop and find number has smallest distance from 0
        for (int x : nums)
        {
            if (abs(x) < abs(closest))
            {
                closest = x;
            }
        }
        // Check if closest is negative number
        // Find non-negative of closest, because find() return last if not found -> != nums.end()
        if (closest < 0 && find(nums.begin(), nums.end(), abs(closest)) != nums.end())
        {
            return abs(closest);
        }
        else
        {
            return closest;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-4, -2, -1, 1, 4, 8};

    cout << "Closest number: " << sol.findClosestNumber(nums) << '\n';

    return 0;
}
