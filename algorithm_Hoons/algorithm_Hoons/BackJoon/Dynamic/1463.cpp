
#include<iostream>
#include<string>

using namespace std;
int Count = 0;
void bottomUp(int _in);
int dpalgo(int _in);

int* dp;
string s;
int main()
{
    int input; 
    scanf("%d", &input);
    dp = new int[input + 1];
    getline(std::cin, s);

    for (int i = 0; i < input; i++)
    {
        dp[i] = 0;
    }

    //dpalgo(input);
    bottomUp(input);

    for (int i = 0; i < input; i++)
    {
        printf("%d \n", dp[i]);
    }


    //printf("%d", (dp[input]));
    return 0;
}

int dpalgo(int _in)
{
    if (_in == 1)
        return 0;
    if (dp[_in] > 0)
        return dp[_in];
    dp[_in] = dpalgo(_in - 1) + 1;
    if (_in % 2 == 0)
    {
        int temp = dpalgo(_in / 2) + 1;
        if (dp[_in] > temp)
            dp[_in] = temp;
    }
    if (_in % 3 == 0)
    {
        int temp = dpalgo(_in / 3) + 1;
        if (dp[_in] > temp)
            dp[_in] = temp;
    }
    return dp[_in];
}

void bottomUp(int _in)
{
    for (int i = 2; i < _in; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0 && dp[i]> dp[i/2] +1)
        {
            dp[i] = dp[i / 2] + 1;
        }
        if (i %3==0 && dp[i] > dp[i/3]+1)
        {
            dp[i] = dp[i / 3] + 1;
        }
    }
}