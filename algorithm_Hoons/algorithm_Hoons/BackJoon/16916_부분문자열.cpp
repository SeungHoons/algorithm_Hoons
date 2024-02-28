#include <iostream>
#include<string>
#include<cstring>

using namespace std;
string S, P;
int* arrKmp;

//----------해당 방법은 o(n*m)의 복잡도를 갖음
//bool Sol()
//{
//	for (int i = 0; i < (S.size() - P.size() +1 ); i++)
//	{
//		if (S[i] == P[0])
//		{
//			for (int j = 0; j < P.size(); j++)
//			{
//				if (S[i + j] != P[j])
//					break;
//				if (j + 1 == P.size())
//					return 1;
//			}
//		}
//	}
//	return 0;
//}

bool Kmp()
{
	int j = 0;
	for (int i = 0; i < S.size(); i++)
	{
		while (j > 0 && S[i] != P[j])
		{
			j = arrKmp[j - 1];
		}
		if (S[i] == P[j]) {
			if (j == P.size() - 1) {
				return 1;
			}
			j++;
		}
	}
	return 0;
}

void makeTable()
{
	//1. 반복되는 것을 기록해준다.

	for (int i = 1, j = 0; i < P.size(); i++)
	{
		while (j>0 && P[i] != P[j])
		{
			j = arrKmp[j - 1];
		}
		if (P[i] == P[j])
			arrKmp[i] = ++j;
	}
	/*char temChar = P[0];
	arrKmp[0] = 0;
	for (int i = 1; i < P.size(); i++)
	{
		if (P[i] == P[0])
		{
			for (int j = 0; j < P.size(); j++)
			{
				if (i + j >= P.size())
					break;
				if (P[i + j] == P[j])
				{
					arrKmp[i + j] = 1 + j;
				}
				else
				{
					arrKmp[i + j] = 0;
					i = i + j;
					break;
				}
			}
		}
		else
		{
			arrKmp[i] = 0;
		}
	}*/
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> S;
	cin >> P;

	arrKmp = new int[P.size()];
	memset(arrKmp, 0, sizeof(int) * P.size());

	makeTable();	
	cout << Kmp();
}