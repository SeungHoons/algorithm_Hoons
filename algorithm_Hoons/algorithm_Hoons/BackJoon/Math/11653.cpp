#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int input = 0;
	int value = 2;
	
	scanf("%d", &input);

	while (input>1)
	{
		if (input % value == 0)
		{
			printf("%d\n", value);
			input /= value;
			continue;
		}
		value++;
	}
	return 0;
}