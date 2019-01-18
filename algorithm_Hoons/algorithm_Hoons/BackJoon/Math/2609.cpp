#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a%b);
    }
}

int main()
{
    int a, b;
    int gcd;

    scanf("%d %d", &a, &b);
    gcd = GCD(a, b);
    printf("%d\n%d\n", gcd,(a*b)/gcd);
    return 0;
}