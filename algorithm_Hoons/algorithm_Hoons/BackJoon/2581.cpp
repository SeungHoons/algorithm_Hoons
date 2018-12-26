#include"stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int inputNum1;
    int inputNum2;

    int min = 10000;
    int max = 0;
    bool bol = false;

    scanf("%d", &inputNum1);
    scanf("%d", &inputNum2);

    for (int j = inputNum1; j <= inputNum2; j++)
    {
        int num = sqrt(j) + 1;

        bol = false;
        for (int i = 2; i <num; i++)
        {
            if (j%i == 0)
            {
                bol = true;
                break;
            }
        }
        if (j == 1 || j==0)
            continue;
        if (!bol || j == 2)
        {
            max += j;
            if (min>j)
            {
                min = j;
            }
        }
    }
    if (max == 0)
    {
        printf("-1");
    }
    else
        printf("%d\n%d", max, min);
}