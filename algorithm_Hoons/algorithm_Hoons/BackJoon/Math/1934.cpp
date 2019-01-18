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
    int TestCase;
    int a, b;
    int gcd;

    scanf("%d", &TestCase);
    for (int i = 0; i < TestCase; i++)
    {
        scanf("%d %d", &a, &b);
        gcd = GCD(a, b);
        printf("%d\n", (a*b) / gcd);
    }


    return 0;
}