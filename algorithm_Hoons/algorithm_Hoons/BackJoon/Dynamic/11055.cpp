#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int input;
    int dy[1001] = { 0 };
    int num[1001] = { 0 };
    int result = 0;

    scanf("%d", &input);
    
    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &num[i]);
    }

    int temp;
    for (int i = 1; i <= input; i++)
    {
        temp = 0;
        for (int j = 1; j < i; j++)
        {
            if (num[i] > num[j])
            {
                if (temp < dy[j])
                {
                    temp = dy[j];
                }
            }
        }
        dy[i] = temp + num[i];
    }

    for (int i = 1; i <= input; i++)
    {
        if (result < dy[i])
        {
            result = dy[i];
        }
    }
    printf("%d", result);

    return 0;
}