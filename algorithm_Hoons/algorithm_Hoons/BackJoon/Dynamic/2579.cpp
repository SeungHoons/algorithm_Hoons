#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int input;
    int nums[301];
    long long dy[301];
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    dy[1] = nums[1];
    dy[2] = nums[1] + nums[2];

    for (int i = 3; i <= input; i++)
    {
        dy[i] = max(dy[i - 2] + nums[i], dy[i - 3] + nums[i - 1] + nums[i]);
    }

    printf("%d", dy[input]);
}