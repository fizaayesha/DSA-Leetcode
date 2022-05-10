#include <iostream>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        int count1[1000] = {0};
        int count2[1000] = {0};
        // count frequency of each letter
        for (int i = 0; s[i] != '\0'; i++)
        {
            count1[s[i] - 'a']++;
        }
        // count frequency of each letter
        for (int i = 0; t[i] != '\0'; i++)
        {
            count2[t[i] - 'a']++;
        }
        int result = 0;
        for (int i = 0; i < 26; i++)
        {
            result += abs(count1[i] - count2[i]);
        }
        result >>= 1;
        return result;
    }
};
int main()
{
    Solution s;
    string s1, s2;
    cin >> s1 >> s2;
    cout << s.minSteps(s1, s2);
    return 0;
}