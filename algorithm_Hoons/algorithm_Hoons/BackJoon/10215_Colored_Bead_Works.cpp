#include <iostream>


/////////이거 못품 

using namespace std;

int TestCase;
int ActionNum;
char Action[16];
char Dishs[4][4];

int main()
{
	cin >> TestCase;

	for(int _testNum = 0; _testNum < TestCase; _testNum++)
	{
		memset(Action, '0', sizeof(char) * 16);
		cin >> ActionNum;

		for(int _acN = 0; _acN < ActionNum; _acN++)
		{
			cin >> Action[_acN];
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cin >> Dishs[i][j];
			}
		}
	}

}