#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
    int input;
    int num[1001];
    int dy[1001] = { 0 };
    int result=0;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &num[i]);
    }

    dy[1] = 1;
    int temp = 0;

    for (int i = 2; i <= input; i++)
    {
        temp = 0;
        for (int j = 1; j < i; j++)
        {
            if (num[i] < num[j])
            {
                if (temp < dy[j])
                {
                    temp = dy[j];
                }
            }
        }
        dy[i] = temp + 1;
    }

    for (int i = 1; i <= input; i++)
    {
        if (result < dy[i])
        {
            result = dy[i];
        }
    }
    printf("%d", result);

}