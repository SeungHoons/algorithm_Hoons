#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    int nums[10001] = { 0 };
    int result[10001][3] = { 0 };

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i <= num; i++)
    {
        result[i][0] = max( max(result[i - 1][0], result[i - 1][1]),  result[i - 1][2]);
        result[i][1] = result[i - 1][0] + nums[i];
        result[i][2] = result[i - 1][1] + nums[i];
    }

    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        if (temp < result[num][i])
        {
            temp = result[num][i];
        }
    }

    printf("%d", temp);
    return 0;
}