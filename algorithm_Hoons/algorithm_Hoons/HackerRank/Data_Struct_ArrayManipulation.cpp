#include "stdafx.h"
//#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	int n;
	int m;
	int max = 0;


	cin >> n >> m;
	vector<double> arr(n, 0);
	for (int a0 = 0; a0 < m; a0++) {
		int a;
		int b;
		int k;

		cin >> a >> b >> k;

		

		for (int i = a - 1; i<b; i++)
		{
			(arr[i]) += k;
			if (arr[i]>max)max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}