#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	
	int N, X;
	int max = 0;
	int nowVal = 0;
	int count = 0;
	int arrNum[250000] = { 0 };

	cin >> N;
	cin >> X;

	int tempNum;
	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < X; j++)
			{
				cin >> arrNum[j];
				nowVal += arrNum[j];
				i = j + 1;
			}
			max = nowVal;
			count++;
		}

		cin >> arrNum[i];
		nowVal -= arrNum[i - X];
		nowVal += arrNum[i];
		
		if (nowVal > max)
		{
			count = 1;
			max = nowVal;
		}
		else if(nowVal == max)
		{
			count++;
		}
	}

	if (max == 0)
		cout << "SAD";
	else
		cout << max << '\n' << count;
}