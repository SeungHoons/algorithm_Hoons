#include"stdafx.h"
#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int testCase = 0;
    int temp = 0;
    int ex[100000];

    scanf_s("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf_s("%d", &ex[i]);
    }
    std::sort(ex, &ex[testCase]);


    for (int i = 0; i < testCase; i++)
    {
        printf_s("%d", ex[i]);
    }

    return 0;
}