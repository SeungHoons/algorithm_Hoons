#include <iostream>
#include<algorithm>
#include<map>
//#define _CRT_SECURE_NO_WARNINGS
using namespace std;




int main()
{
	int a;
	int b;
	int answer = 0;

	cin >> a;
	cin >> b;

	map<int,bool> mapA;
	//mapA.emplace(a);
	int temA;
	for (int i = 0; i < a; i++)
	{
		cin >> temA;
		//mapA.insert(make_pair(temA, true));
		mapA[temA] = true;

	}


	int temB = 0;
	for (int i = 0; i < b; i++)
	{
		cin >> temB;

		if (!mapA.erase(temB))
			answer++;

	}

	cout << mapA.size() + answer;
}