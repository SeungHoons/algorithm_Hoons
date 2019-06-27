#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	pair<int,int>* a;
	int ans = 0;

	scanf("%d", &n);
	a = new pair<int,int>[n];

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i;
	}

	sort(a, a + n + 1);

	for (int i = 1; i <= n; i++)
	{
		if (ans < a[i].second - i)
			ans = a[i].second - i;
	}

	printf("%d\n", ans + 1);
	

	return 0;
}