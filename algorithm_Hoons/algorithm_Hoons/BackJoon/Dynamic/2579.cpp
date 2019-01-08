#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int input;
    int nums[301];
    long long dy[301][3];
    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        scanf("%d", nums[i]);
    }

    for (int i = 0; i < input; i++)
    {
        dy[i+1][0] = max(nums[i+1],)
    }
}