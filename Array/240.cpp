#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0, j = m - 1;
        while (i < n && j >= 0)
        {
            int element = matrix[i][j];
            if (target == element)
            {
                return 1;
            }
            else if (target > element)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return 0;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << s.searchMatrix(vect, 7);

    return 0;
}