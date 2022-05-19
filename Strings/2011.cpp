#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int n = operations.size();
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (operations[i] == "++X" || operations[i] == "X++")
            {
                x += 1;
            }
            else
            {
                x -= 1;
            }
        }
        return x;
    }
};
int main()
{
    Solution s;
    vector<string> operations{"--X", "X++", "++X,--X", "X++", "X++"};
    cout << s.finalValueAfterOperations(operations);
    return 0;
}