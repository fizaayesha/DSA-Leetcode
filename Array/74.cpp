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
        int t = n * m;
        int low1 = 0;
        int high1 = t - 1;
        int mid1 = low1 + (high1 - low1) / 2;
        while (low1 <= high1)
        {
            if (matrix[mid1 / m][mid1 % m] == target)
            {
                return 1;
            }
            else if (matrix[mid1 / m][mid1 % m] > target)
            {
                high1 = mid1 - 1;
            }
            else
            {
                low1 = mid1 + 1;
            }
            mid1 = low1 + (high1 - low1) / 2;
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
    cout<<s.searchMatrix(vect,7);

    return 0;
}