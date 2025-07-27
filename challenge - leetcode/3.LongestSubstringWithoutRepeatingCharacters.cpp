// 3. Longest Substring Without Repeating Characters

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>

using namespace std;

class Solution
{
public:
    string result = "";
    int length = 0;

public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0, maxLength = 0;
        unordered_set<char> charSet; // val for contains list of unrepeat char

        // Loop to traverse entire string s
        for (int right = 0; right < s.length(); right++)
        {
            // If find repeat char at right pointer
            // Remove leftest char and move left pointer up, can repeat if repeat char in middle of charSet
            while (charSet.find(s[right]) != charSet.end())
            {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);                     // Add char at right pointer into charSet
            maxLength = max(maxLength, right - left + 1); // Update length if new value higher

            // Some code for get result string from charSet array, might vary due to unordered nature
            // Maybe need test
            if (maxLength > length)
            {
                result = ""; // Reset
                length = maxLength;

                std::string resultString(charSet.begin(), charSet.end());
                result = resultString;
            }
        }

        return maxLength;
    }

    int lengthOfLongestSubstringWithHash(string s)
    {
        int left = 0, maxLength = 0;
        unordered_map<char, int> count; // Hash map contains unique char and frequency

        // Loop to traverse entire string s
        for (int right = 0; right < s.length(); right++)
        {
            count[s[right]] = count[s[right]] + 1; // Add frequency of char c

            // If frequency of char c > 1
            // Reduce frequency of leftest char and move up left pointer
            while (count[s[right]] > 1)
            {
                count[s[left]] = count[s[left]] - 1;
                left++;
            }

            maxLength = max(maxLength, right - left + 1); // Update length if new value higher
        }

        return maxLength;
    }
};

int main()
{
    Solution sol;
    string s = "pwwkew";
    string result = "";

    sol.lengthOfLongestSubstring(s);

    cout << "Max length: " << sol.lengthOfLongestSubstringWithHash(s) << '\n';

    for (int i = 1; i < sol.result.size(); i += 2)
    {
        sol.result.insert(i, " ");
    }
    cout << "Unique char in longest substring: " << sol.result;

    return 0;
}