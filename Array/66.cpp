#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        digits[n - 1] += 1;
        int c = digits[n - 1] / 10;
        digits[n - 1] = digits[n - 1] % 10;
        for (int i = n - 2; i >= 0; i--)
        {
            if (c == 1)
            {
                digits[i] += 1;
                c = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
        }
        if (c == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution s;

    s.plusOne(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}