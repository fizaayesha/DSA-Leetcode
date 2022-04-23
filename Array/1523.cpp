#include <iostream>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int diff = high-low;
        int count = diff/2;
            if(low%2==1 || high%2==1){
                count++;
            }
        return count;
    }
};
int main()
{
    Solution s;
    cout<<s.countOdds(3,7);
    return 0;
}