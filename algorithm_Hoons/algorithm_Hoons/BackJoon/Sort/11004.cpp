#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. ���͸� �̿��� ��� ������ �ش� �ε����� ����

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