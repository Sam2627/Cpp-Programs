// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        // Loop all value in array

        for (int i = 0; i < nums.size(); ++i)
        {
            // Get remain value need
            int remain = target - nums[i];
            // Find in array if it have remain value, because find() return last if not found -> != nums.end()
            if (map.find(remain) != map.end())
            {
                // map[remain] = pair value match with remain value.
                return {map[remain], i};
            }
            // Save pair of value and index, use later if find match remain value need
            map[nums[i]] = i;
        }
        // Return empty if not found
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;
    vector<int> ans = sol.twoSum(nums, target);

    if (ans.size() == 2)
    {
        cout << "Pair of numbers sum of " << target << ": ";
        for (const auto &an : ans)
        {
            cout << nums[an] << " ";
        }
    }
    else
    {
        cout << "Can't find pair of numbers sum of " << target << " in the array: \n";
        for (const auto &num : nums)
        {
            cout << num << " ";
        }
    }

    return 0;
}