#include "stdafx.h"
#include <iostream>

using namespace std;

const long mod = 1e9;
long result[101][10] = {0};

void solution(int _in)
{
    for (int i = 1; i <= 9; i++) {
        result[1][i] = 1;
    }
    for (int i = 2; i <= _in; i++) {
        for (int j = 0; j <= 9; j++) {
            result[i][j] = 0;
            if (j - 1 >= 0) {
                result[i][j] += result[i - 1][j - 1];
            }
            if (j + 1 <= 9) {
                result[i][j] += result[i - 1][j + 1];
            }
            result[i][j] %= mod;
        }
    }
    long long ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans += result[_in][i];
    }
    ans %= mod;
    cout << ans << '\n';
    return;
}

int main()
{
    int input;

    scanf("%d", &input);

    solution(input);
}
