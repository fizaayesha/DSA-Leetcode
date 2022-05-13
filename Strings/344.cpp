#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

class Solution
{
public:
    void reverseString(char *s, int sSize)
    {
        int b = 0;
        int e = sSize - 1;
        while (b < e)
        {
            char temp = s[b];
            s[b] = s[e];
            s[e] = temp;
            b++;
            e--;
        }
    }
};
int main()
{
    Solution s;
    char s1[1000];
    cin >> s1;
    // cout << s1;
    // int n = length(s1);
    // cout << "Length is :" << n;
    s.reverseString(s1, strlen(s1));
    cout << s1;
    return 0;
}