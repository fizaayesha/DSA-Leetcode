#include <iostream>
using namespace std;
class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int c = coordinates[0] - 'a' + 1;
        int n = coordinates[1];
        if (c % 2 == 0 && n % 2 != 0)
        {
            return true;
        }
        else if (c % 2 != 0 && n % 2 == 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.squareIsWhite("f7");
    return 0;
}