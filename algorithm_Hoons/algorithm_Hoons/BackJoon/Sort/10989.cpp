#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int testCase;
	int iNum[10001] = {};
	int tem;

	cin >> testCase;

	for (int i = 0; i < testCase; i++)
	{
		cin >> tem;
		iNum[tem]++;
	}



	for (int i = 1; i <10001; i++)
	{
		for (int j = 0; j < iNum[i]; j++)
		{
			cout << i << "\n";
		}
	}


	return 0;
}

