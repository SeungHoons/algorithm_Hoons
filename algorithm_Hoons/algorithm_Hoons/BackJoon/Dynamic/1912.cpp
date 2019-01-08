#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int input;
    vector<int> nums;
    vector<long long> Dy;
    long long result = 0;

    scanf("%d", &input);

    for (int i = 0; i < input; i++)
    {
        int temp;
        scanf("%d", &temp);
        nums.push_back(temp);
    }

    Dy.resize(nums.size());
    result = Dy[0] = nums[0];
    for (int i = 1; i < input; i++)
    {
        if (Dy[i-1] + (long long)nums[i] > nums[i])
        {
            Dy[i] = Dy[i - 1] + (long long)nums[i];
        }
        else
        {
            Dy[i] = (long long)nums[i];
        }

        if (Dy[i] > result)
            result = Dy[i];
    }

    printf("%ld", result);

    return 0;
}