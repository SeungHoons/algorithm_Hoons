#include "stdafx.h"
#include <iostream>

using namespace std;

long long result[1001][10] = { 0 };
long long mod = 10007;
int solution(int _in)
{
    for (int i = 0; i < 10; i++)
    {
        result[1][i] = 1;
    }
    for (int i = 2; i <= _in; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = j; k < 10; k++)
            {
                result[i][j] += result[i - 1][k];
                result[i][j] %= mod;
            }
        }
    }

    long long output=0;
    for (int i = 0; i < 10; i++)
        output += result[_in][i];
    output = output % mod;
    printf("%lld", output);
    return 0;
}

int main()
{
    int input;

    scanf("%d", &input);

    solution(input);
}