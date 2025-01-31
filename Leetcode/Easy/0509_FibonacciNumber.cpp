#include <bits\stdc++.h>

using namespace std;

int fib(int n){return (n <= 1)? n : fib(n-1) + fib(n-2);} 

int main(void)
{
    cout << fib(4);
}