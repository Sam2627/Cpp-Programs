// 70. Climbing Stairs
// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        unordered_map<int, int> memo = {{1, 1}, {2, 2}};
        return climb(n, memo);
    }

    int climb(int n, unordered_map<int, int> &memo)
    {
        if (memo.find(n) != memo.end())
        {
            return memo[n];
        }
        else
        {
            // Recursion
            memo[n] = climb(n - 1, memo) + climb(n - 2, memo);
            return memo[n];
        }
    }
};

int main()
{
    Solution sol;
    int steps = 5;

    cout << "Number distinct ways: " << sol.climbStairs(steps);

    return 0;
}