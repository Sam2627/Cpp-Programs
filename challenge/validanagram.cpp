#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Anagram : a word, phrase, or name formed by rearranging the letters of another.

class Solution
{
public:
    // Use character frequency of each strings
    bool isAnagram(string s, string t)
    {
        // Check length
        if (s.size() != t.size())
        {
            return false;
        }
        // Create hashmap for string s and t
        unordered_map<char, int> sMap, tMap;
        // Count unique char in s
        for (char c : s)
        {
            sMap[c]++;
        }
        // Count unique char in t
        for (char c : t)
        {
            tMap[c]++;
        }

        return sMap == tMap;
    }
};

int main()
{
    Solution sol;
    string anagram = "lHole oWldr";
    string text = "Hello World";

    if (sol.isAnagram(anagram, text))
    {
        cout << "This anagram is valid!";
    }
    else
    {
        cout << "This anagram is not valid!";
    }

    return 0;
}