#define _CRT_SECURE_NO_WARNIGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	vector<long long> vNum;
	int cardNum;

	cin >> cardNum;
	vNum.resize(cardNum);

	for (int i = 0; i < cardNum; i++)
	{
		cin >> vNum[i];

	}
	
	sort(vNum.begin(), vNum.end());


	int cnt = 1;
	int ans_cnt = 1;
	long long ans = vNum[0];

	for (long long i = 1; i < cardNum; i++)
	{

		if (vNum[i] == vNum[i - 1])
		{
			cnt++;

			if (cnt > ans_cnt)
			{
				ans_cnt = cnt;
				ans = vNum[i];
			}
		}
		else
		{
			cnt = 1;
		}
	}

	cout << ans;
	return 0;
}