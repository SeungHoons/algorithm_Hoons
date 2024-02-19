#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main()
{
	const int MAXATOZ = 26;
	int arrAz[MAXATOZ];
	string str;
	//a = 97
	//z = 122

	memset(arrAz, -1, sizeof(int) * MAXATOZ);

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if(arrAz[str[i] - 97] == -1)
			arrAz[str[i] - 97] = i;
	}

	for (int i = 0; i < MAXATOZ; i++)
	{
		cout << arrAz[i] << " ";
	}

}