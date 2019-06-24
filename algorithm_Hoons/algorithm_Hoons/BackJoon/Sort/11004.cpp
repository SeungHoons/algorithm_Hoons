#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 벡터를 이용해 모두 저장후 해당 인덱스에 접근

int main()
{
	vector<long long> vNum;
	int goalNum;
	int maxNum;


	scanf("%d %d", &maxNum, &goalNum);
	vNum.resize(maxNum);

	for (int i = 0; i < maxNum; i++)
	{
		scanf("%lld", &vNum[i]);
	}

	sort(vNum.begin(), vNum.end());

	printf("%lld", vNum[goalNum - 1]);
	return 0;
}