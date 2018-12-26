#include"stdafx.h"
#include<iostream>

using namespace std;

int solution(int _n);
int nB[12] = { 0 };

int main()
{
    int testCase;
    int n;

    scanf("%d", &testCase);

    nB[1] = 1;
    nB[2] = 2;
    nB[3] = 4;


    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &n);

        solution(n);
        printf("%d\n", nB[n]);

    }
}

int solution(int _n)
{
    if (nB[_n] > 0)
        return nB[_n];
    nB[_n] = solution(_n - 1) + solution(_n - 2) + solution(_n - 3);

    return nB[_n];
}