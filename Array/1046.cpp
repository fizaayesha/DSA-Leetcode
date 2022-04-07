// You are given an array of integers stones where stones[i] is the weight of the ith stone.

// We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

// If x == y, both stones are destroyed, and
// If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
// At the end of the game, there is at most one stone left.

// Return the smallest possible weight of the left stone. If there are no stones left, return 0.

// Example 1:

// Input: stones = [2,7,4,1,8,1]
// Output: 1
// Explanation:
// We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
// we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
// we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
// we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        cout << "Expected Answer\n";
        int n = stones.size();
        while (n > 1)
        {
            sort(stones.begin(), stones.end());
            if (stones[n - 1] == stones[n - 2])
            {
                n -= 2;
            }
            else
            {
                stones[n - 2] = stones[n - 1] - stones[n - 2];
                n -= 1;
            }
        }
        return (n == 0) ? 0 : stones[0];
    }
};

int main()
{
    Solution s;
    vector<int> stones{2, 7, 43, 1, 8, 1};
    int res = s.lastStoneWeight(stones);
    cout << res;
    return 0;
}