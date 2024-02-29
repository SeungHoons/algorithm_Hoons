#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string* strN, *strM;
int intN, intM;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	cin >> intN;
	cin >> intM;
	strN = new string[intN];
	strM = new string[intM];

	for (int i = 0; i < intN; i++)
	{
		cin >> strN[i];
	}

	sort(&strN[0], &strN[intN]);

	string strTemp;
	int answer = 0;

	for (int i = 0; i < intM; i++)
	{
		cin >> strTemp;

		if (binary_search(&strN[0], &strN[intN], strTemp))
			answer++;
	}

	

	cout << answer;
}