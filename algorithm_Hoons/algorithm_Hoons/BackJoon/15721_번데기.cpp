#include <iostream>

using namespace std;

int Solution(int& _allMan, int& _targetNum, bool& _bbunDagi)
{
	int targetCount = _targetNum;
	int manIndex = 0;
	int gameCycle = 0;
	bool nowDaegi = false;

	while (targetCount != 0)
	{
		if (targetCount - 2 <= 0)
		{
			for (int i = 0; i < 4; i++)
			{
				if (_bbunDagi == nowDaegi)
				{
					targetCount -= 1;
				}
				if (nowDaegi)
				{
					nowDaegi = false;
				}
				else
				{
					nowDaegi = true;
				}
				manIndex++;

				if (targetCount == 0)
				{
					return manIndex;
				}
			}
		}
		else
		{
			targetCount -= 2;
			manIndex += 4;
		}

		if (targetCount - (2 + gameCycle) <= 0)
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < (2 + gameCycle); j++)
				{
					if (nowDaegi == _bbunDagi)
						targetCount--;

					manIndex++;
					if (targetCount == 0)
					{
						return manIndex;
					}
				}
				if (nowDaegi)
					nowDaegi = false;
				else
					nowDaegi = true;
			}
		}
		else
		{
			targetCount -= (2+gameCycle);
			manIndex += (4+(gameCycle*2));
		}

		gameCycle++;
	}

	if (_targetNum == 0)
	{
		return 0;
	}
}


int changeManNum(int _count, int _allman)
{
	_count %= _allman;

	if (_count == 0)
		return _allman - 1;
	else
		return _count - 1;
}

int main()
{
	int allMan;
	int targetNum;
	bool bbunOrDaegi;

	cin >> allMan >> targetNum >> bbunOrDaegi;

	
	cout << changeManNum(Solution(allMan, targetNum, bbunOrDaegi), allMan);

}