#include <iostream>

using namespace std;


int N;
int* numArr;
int* dp;

void processDP()
{
	for (int i = 1; i <= N; i++)
	{
		dp[i] = numArr[i];
		for (int j = 1; j <= i; j++)
		{
			cout << dp[i - j] + numArr[j] << " ";

			dp[i] = min(dp[i], dp[i - j] + numArr[j]);

		}
		cout << endl;
	}
}


int main()
{
	cin >> N;

	numArr = new int[N + 1];
	dp = new int[N + 1];
	dp[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> numArr[i];
	}
	processDP();


	cout << dp[N];
}
