#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
    int testCase =0 ;
    long long Dy[101] = { 0 };
    int temp=0;

    Dy[1] = 1;
    Dy[2] = 1;
    Dy[3] = 1;
    Dy[4] = 2;
    Dy[5] = 2;

    for (int i = 6; i <= 100; i++)
    {
        Dy[i] = Dy[i - 1] + Dy[i - 5];
    }

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &temp);
        printf("%lld\n", Dy[temp]);
    }
    return 0;
}