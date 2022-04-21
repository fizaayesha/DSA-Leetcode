#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> a(n, vector<int>(n));
        int minr = 0;
        int maxr = n - 1;
        int minc = 0;
        int maxc = n - 1;
        int count = 0;
        while (minr <= maxr && minc <= maxc)
        {
            for (int j = minc; j <= maxc; j++)
            {
                a[minr][j] = ++count;
            }
            for (int i = minr + 1; i <= maxr; i++)
            {
                a[i][maxc] = ++count;
            }
            if (minc < maxc && minr < maxr)
            {
                for (int j = maxc - 1; j > minc; j--)
                {
                    a[maxr][j] = ++count;
                }
                for (int i = maxr; i > minr; i--)
                {
                    a[i][minc] = ++count;
                }
            }
            minr++;
            maxr--;
            minc++;
            maxc--;
        }
        return a;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    Solution s;

    s.generateMatrix(n);
    return 0;
}