#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int minimumSum(int num)
    {
        vector<int> v;
        while (num != 0)
        {
            int l = num % 10;
            v.push_back(l);
            num = num / 10;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        ans = (v[0] * 10 + v[3]) + (v[1] * 10 + v[2]); // As given in the question that for every case there is 4 digit integer so it is better to take the index as 0,1,2,3
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.minimumSum(1234);
    return 0;
}