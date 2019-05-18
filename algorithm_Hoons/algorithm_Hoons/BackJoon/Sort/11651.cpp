#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main()
{
	int testCase;
	vector<pair<int, int>> a;

	cin >> testCase;
	a.resize(testCase);

	for (int i = 0; i < testCase; i++)
	{
		cin >> a[i].second >> a[i].first;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < testCase; i++)
	{
		cout << a[i].second << " " << a[i].first << "\n";
	}
	return 0;
}