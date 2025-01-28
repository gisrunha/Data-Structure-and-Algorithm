#include <bits\stdc++.h>

using namespace std;

bool isPowerOfTwo(int n)
{
    long x = 1;
    bool b = false;

    while (n >= x)
    {
        if (x == n)
        {
            b = true;
        }
        x *= 2;
    }
    return b;
}

int main(void)
{
    cout << isPowerOfTwo(16);
    return 0;
}
