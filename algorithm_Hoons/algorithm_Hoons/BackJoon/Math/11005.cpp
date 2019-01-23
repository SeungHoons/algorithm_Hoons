#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//#include <stdlib.h>

using namespace std;

int main()
{
    string ans;
    char strtem;
    int num;
    int b;

    scanf("%d%d", &num, &b);

    while (num > 0)
    {

        int temp;
        temp = num % b;
        num /= b;
        if (0 <= temp && temp <= 9)
        {
            ans += to_string( temp);
        }
        else
        {
            strtem = temp + 55;
            ans += strtem;
        }

    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
}