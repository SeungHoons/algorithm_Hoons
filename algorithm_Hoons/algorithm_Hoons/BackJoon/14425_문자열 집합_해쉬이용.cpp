#include <iostream>
#include <cstring>
#include <unordered_map>

using namespace std;

unordered_map<string, int> mapN;

int intN, intM;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	cin >> intN;
	cin >> intM;
	
	string strTemp;


	for (int i = 0; i < intN; i++)
	{
		cin >> strTemp;

		mapN.insert(make_pair(strTemp,0));
	}

	int answer = 0;

	for (int i = 0; i < intM; i++)
	{
		cin >> strTemp;

		auto iter = mapN.find(strTemp);
		if (iter != mapN.end())
		{
			answer++;
		}
		
	}



	cout << answer;
}