#define _CRT_SCURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int testCase;
	vector<pair<int ,int >> vPair;

	cin >> testCase;
	vPair.resize(testCase);

	for (int i = 0; i < testCase; i++)
	{
		cin >> vPair[i].first >> vPair[i].second;
	}

	stable_sort(vPair.begin(), vPair.end());

	for (int i = 0; i < testCase; i++)
	{
		cout << vPair[i].first << " " << vPair[i].second << "\n";
	}
	return 0;
}