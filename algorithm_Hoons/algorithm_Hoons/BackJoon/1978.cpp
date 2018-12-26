#include"stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int testCase;
    int inputNum;
    int result = 0;
    bool bol = false;

    scanf("%d ", &testCase);

    for (int j = 0; j < testCase; j++)
    {
        scanf("%d", &inputNum);
        int num = sqrt(inputNum) + 1;
        bol = false;
        for (int i = 2; i <num; i++)
        {
            if (inputNum%i == 0)
            {
                bol = true;
                break;
            }
        }
        if (inputNum == 1)
            continue;
        if(!bol||inputNum==2)
        result++;
    }
    printf("%d", result);
}