#include <iostream>
using namespace std;
class Solution
{
public:
    bool possible(char ch)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch)
    {
        char ans;
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            ans = ch;
        }
        else
        {
            ans = ch - 'A' + 'a';
        }
        return ans;
    }
    bool isPalindrome(string s)
    {
        string s1 = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (possible(s[i]))
            {
                s1.push_back(s[i]);
            }
        }
        int n1 = s1.length();
        for (int i = 0; i < n1; i++)
        {
            s1[i] = toLowerCase(s1[i]);
        }
        int start = 0;
        int end = n1 - 1;
        while (start <= end)
        {
            if (s1[start] != s1[end])
            {
                return 0;
            }
            start++;
            end--;
        }
        return 1;
    }
};
int main()
{
    Solution s;
    cout << s.isPalindrome("N2 i&nJA?a& jnI2n");
    return 0;
}