#include <iostream>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        while(n>1){
            if(n%2==0){
                n=n/2;
            }
            else if(n%3==0){
                n=n/3;
            }
            else if(n%5==0){
                n=n/5;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    cout<<s.isUgly(5);
    return 0;
}