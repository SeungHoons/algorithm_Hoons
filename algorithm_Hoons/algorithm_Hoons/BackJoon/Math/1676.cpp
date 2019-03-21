#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	int input;
	int count = 0;

	scanf("%d" ,&input);


	for (int i = 5; i <= input; i += 5)
	{
		int temp = i;
		while (true)
		{
			if (temp / 5 == 0 || temp % 5 != 0)
				break;
			temp /= 5;
			count++;
		}
	}

	printf("%d", count);

	return 0;
}