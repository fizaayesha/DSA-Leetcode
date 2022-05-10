#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int n1 = s.length();
        int n2 = t.length();
        if (n1 != n2)
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    string s1, s2;
    cin >> s1 >> s2;
    if (s.isAnagram(s1, s2))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}