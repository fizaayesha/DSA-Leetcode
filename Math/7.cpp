#include <iostream>
using namespace std;

int reverse(int x)
{
    long long reverse = 0, rem;
    while (x != 0)
    {
        rem = x % 10;
        reverse = (reverse * 10) + rem;
        if (reverse >= 2147483647 || reverse <= -2147483647)
        {
            return 0;
        }
        x = x / 10;
    }
    return reverse;
}
int main()
{
    cout << reverse(123);
    return 0;
}