#include <iostream>
using namespace std;
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int n1 = s.length();
        int n2 = part.length();
        while (n1 != 0 && s.find(part) < n1)
        {
            s.erase(s.find(part), n2);
        }
        return s;
    }
};
int main()
{
    Solution s;
    cout << s.removeOccurrences("daabcbaabcbc", "abc");
    return 0;
}