#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

string strInput;
list<int> lstNum;
int arrNum[1000000];
int MaxNum;
string strAnswer[2];

int exchageStr(char _input)
{
	switch (_input)
	{
	case 'A':
		return 3;
	case 'B':
		return 2;
	case 'C':
		return 1;
	case 'D':
		return 2;
	case 'E':
		return 3;
	case 'F':
		return 3;
	case 'G':
		return 3;
	case 'H':
		return 3;
	case 'I':
		return 1;
	case 'J':
		return 1;
	case 'K':
		return 3;
	case 'L':
		return 1;
	case 'M':
		return 3;
	case 'N':
		return 3;
	case 'O':
		return 1;
	case 'P':
		return 2;
	case 'Q':
		return 2;
	case 'R':
		return 2;
	case 'S':
		return 1;
	case 'T':
		return 2;
	case 'U':
		return 1;
	case 'V':
		return 1;
	case 'W':
		return 2;
	case 'X':
		return 2;
	case 'Y':
		return 2;
	case 'Z':
		return 1;
	}
}


int main()
{
	cin >> strInput;
	strAnswer[0] = "You're the winner?";
	strAnswer[1] = "I'm a winner!";
	int temInt;
	int _indexValue;

	MaxNum = strInput.size();

	for (int i = 0; i < strInput.size(); i += 2)
	{
		if (strInput.size() == i + 1)
		{
			arrNum[i] = exchageStr(strInput[i]);
			break;
		}
		temInt = exchageStr(strInput[i]) + exchageStr(strInput[i + 1]);

		if (temInt > 10)
			temInt = temInt % 10;
		arrNum[i] = temInt;
	}

	if (MaxNum == 1)
	{
		cout << strAnswer[arrNum[0] % 2];
		return 0;
	}

	_indexValue = 2;

	while (_indexValue < MaxNum)
	{
		for (int i = 0; i < (MaxNum / _indexValue); i += _indexValue)
		{
			temInt = arrNum[i * _indexValue] + arrNum[(i + 1) * _indexValue];

			if (temInt > 10)
				temInt %= 10;

			arrNum[i * _indexValue] = temInt;

			//cout << i * _indexValue << " : " << arrNum[i * _indexValue] << "-----" << (i + 1) * _indexValue << " : " << arrNum[(i + 1) * _indexValue] << endl;
		}
		_indexValue *= 2;
	}

	/*if (MaxNum %2 == 1)
	{
		temInt = arrNum[0] + arrNum[MaxNum - 1];
		if (temInt > 10)
			temInt %= 10;

		arrNum[0] = temInt;
	}*/

	cout << strAnswer[arrNum[0] % 2];
}