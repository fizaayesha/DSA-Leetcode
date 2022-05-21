#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string s1, s2;
        for (int i = 0; i < word1.size(); i++)
        {
            s1 += word1[i];
        }
        for (int i = 0; i < word2.size(); i++)
        {
            s2 += word2[i];
        }
        if (s1 == s2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Solution s;
    vector<string> str{"ab", "c"};
    vector<string> str1{"a", "cb"};
    cout << s.arrayStringsAreEqual(str, str1);

    return 0;
}