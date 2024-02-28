#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <unordered_map>
#include <vector> 
using namespace std;

int N;
int M;

unordered_map<int, int>  ghash;
vector<int> vec;

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	cin >> N;

	int tempN;
	for (int i = 0; i < N; i++)
	{
		cin >> tempN;

		auto iter = ghash.find(tempN);
		if (iter != ghash.end())
		{
			iter->second = iter->second + 1;
		}
		else {
			ghash.insert(make_pair(tempN, 1));
		}
	}


	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> tempN;
		
		auto iter = ghash.find(tempN);
		if (iter != ghash.end())
		{
			printf("%d ", iter->second);
		}
		else
			printf("0 ");

	}

}