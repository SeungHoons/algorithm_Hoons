#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{

    int N;
    int K;
    long long Dp[201][201] = { 0 };
    long long mod = 1000000000;
    
    scanf("%d %d", &N,&K);
    Dp[0][0] = 1LL;
    for (int i = 1; i <= K; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            for (int l = 0; l <= j; l++)
            {
                Dp[i][j] += Dp[i-1][j - l];
                Dp[i][j] %= mod;
            }
        }
    }

    printf("%lld", Dp[K][N]);
    return 0;
}