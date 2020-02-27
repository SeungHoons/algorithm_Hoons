#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;

	map<string, int> map1;
	multimap<string, int>map2;

	for (int i = 0; i < genres.size(); i++)
	{
		if (map1.find(genres[i]) == map1.end())
		{
			map1[genres[i]] = plays[i];
		}
		else
			map1[genres[i]] += plays[i];
	}

	int max = 0;
	map<int, string> map3;
	for (auto iter = map1.begin(); iter != map1.end(); iter++)
	{
		map3[-(*iter).second] = (*iter).first;
	}

	vector<pair<int, int>> pairInt;
	int count = 2;
	for (auto iter = map3.begin(); iter != map3.end(); iter++)
	{
		pairInt.clear();
		for (int i = 0; i < genres.size(); i++)
		{
			if ((*iter).second == genres[i])
			{
				pairInt.push_back(pair<int, int>(-plays[i], i));
			}
		}
		sort(pairInt.begin(), pairInt.end());

		count = 2;
		for (int i = 0; i < pairInt.size(); i++)
		{
			if (count <= 0)
				break;
			count--;
			answer.push_back(pairInt[i].second);
		}
	}


	return answer;
}

int main()
{
	vector<string> genre;
	vector<int> playNum;
	
	genre = { "classic", "pop", "classic", "classic", "pop" };
	playNum = { 500, 600, 150, 800, 2500 };

	solution(genre, playNum);
	return 0;
}