
#include<iostream>

using namespace std;

int TopDown(int _in);
void BottomUp(int _in);

long* dp;

int main()
{
    int input;
    scanf("%d", &input);

    dp = new long[input+1];
    for (int i = 0; i <= input; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    dp[1] = 1;

    TopDown(input);
    //BottomUp(input);

    printf("%d", dp[input]);

    //for (int i = input; i > input - 10; i--)
    //{
    //    printf("%d\n", dp[i]);

    //}
}

int TopDown(int _in)
{
    if (_in == 1)
        return 1;
    if (dp[_in] > 0)
        return dp[_in];
    dp[_in] = TopDown(_in-1) + TopDown(_in-2);
    dp[_in] %= 10007;
    return dp[_in];
}

void BottomUp(int _in)
{

}