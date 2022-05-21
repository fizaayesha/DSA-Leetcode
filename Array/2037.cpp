#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int n = seats.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int ans = abs(seats[i] - students[i]);
            count += ans;
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> a1{1, 4, 3, 5};
    vector<int> a2{1, 3, 3, 2};
    cout << s.minMovesToSeat(a1, a2);
    return 0;
}