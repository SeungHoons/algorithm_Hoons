#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
    int input;
    int *nums;
    int *dy;
    int result=0;

    scanf("%d", &input);

    nums = new int[input + 1];
    dy = new int[input + 1];

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &nums[i]);
    }

    dy[1] = 1;
    int temp;

    for (int i = 2; i <= input; i++)
    {
        temp = 0;
        for (int j = 1; j < i; j++)
        {
            if (nums[i] > nums[j])
            {
                if (temp < dy[j])
                {
                    temp = dy[j];
                }
            }
        }
        if (temp >= 1)
            dy[i] = temp + 1;
        else
            dy[i] = 1;
    }

    for (int i = 1; i <= input; i++)
    {
        if (result < dy[i])
        {
            result = dy[i];
        }
    }
    printf("%d", result);
    //for (int i = 1; i <= input; i++)
    //{
    //    printf("%d / ", dy[i]);
    //}
    return 0;
}