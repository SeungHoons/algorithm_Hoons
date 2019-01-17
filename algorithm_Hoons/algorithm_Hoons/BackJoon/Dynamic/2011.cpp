#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string S;
    long long Dy[5001] = { 0 };
    Dy[0] = 1;
    cin >> S;
    S = ' ' + S;
    for (int i = 1; i <= S.size(); i++)
    {
        int x = S[i] - '0';
        if (1 <= x && x <= 9)
        {
            Dy[i] = (Dy[i] + Dy[i - 1]) % 1000000;
        }
        if (i == 1)continue;
        if (S[i - 1] == '0')continue;
        x = (S[i - 1] - '0') * 10 + (S[i] - '0');
        if (10 <= x && x <= 26)
        {
            Dy[i] = (Dy[i] + Dy[i - 2]) % 1000000;
        }
    }

    printf("%lld", Dy[S.size()-1]);
    return 0;
}