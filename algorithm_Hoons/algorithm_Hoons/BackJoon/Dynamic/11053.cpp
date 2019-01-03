#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
    int input;
    int *nums;
    int *dy;

    scanf("%d", &input);

    nums = new int[input + 1];
    dy = new int[input + 1];

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &nums[i]);
    }

    dy[1] = 1;
    for (int i = 2; i <= input; i++)
    {
        
    }

    
    return 0;
}