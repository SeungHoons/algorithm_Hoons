#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

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
    scanf("%d", &TestCase);
    for (int i = 0; i < TestCase; i++)
    {
        int num;
        long add =0;
        long a[100] = { 0 };
        scanf("%d", &num);
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &a[j]);
            for (int k = 0; k < j; k++)
            {
                add += GCD(a[j], a[k]);
            }
        }
        if (add == 0)
            printf("%ld", a[0]);
        else 
            printf("%ld\n", add);
    }


    return 0;
}