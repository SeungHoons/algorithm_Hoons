#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int targetNum;
	int elementMax;
	vector<int> vecNums;
	string strNum;
	vector<int> vecAns;
	bool isfirstNumBig = true;

	cin >> targetNum >> elementMax;

	for (int i = 0; i < elementMax; i++)
	{
		vecNums.push_back(0);
		cin >> vecNums[i];
	}

	strNum =  to_string(targetNum);
	for (int i = 0; i < strNum.size(); i++)
	{
		vecAns.push_back(0);
		if (isfirstNumBig)
		{
			for (int j = 0; j < elementMax; j++)
			{
				if ((strNum[i] - '0') >= vecNums[j] && vecAns[i] <= vecNums[j])
				{
					vecAns[i] = vecNums[j];
					if (i == 0 && (strNum[i] - '0') > vecNums[j])
						isfirstNumBig = false;
				}
			}
		}
		else
		{
			int maxNum =0;
			for (int j = 0; j < elementMax; j++)
			{
				if (maxNum < vecNums[j])
				{
					maxNum = vecNums[j];
				}
			}

			for (int j = 1; j < strNum.size(); j++)
			{
				vecAns.push_back(maxNum);
			}
			break;
		}
	}

	for (int i = 0; i < vecAns.size(); i++)
		cout << vecAns[i];
}