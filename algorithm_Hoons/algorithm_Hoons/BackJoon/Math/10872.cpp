#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int input;
	long result = 1;

	scanf("%d", &input);

	if (input <=1)
		printf("%d", 1);
	else
	{
		for (int i = 2; i <= input; i++)
		{
			result *= i;
		}
		printf("%ld", result);
	}
	return 0;
}