#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

bool Collect(string _a, string _b)
{
	int count = 0;
	for (int i = 0; i < _a.length(); i++)
	{	
		if (_a[i] != _b[i])
		{
			count++;
		}
	}

	if (count != 1)
	{
		return false;
	}
	return true;
}

int DFSv1(string _now, string _starget, vector<string>& _words, bool* _visited, int _count)
{
	int result = 0;
	if (!strcmp(_now.c_str(), _starget.c_str()))
	{
		return _count ==0 ? 1 : _count;
	}

	int temp = 0;
	for (int i = 0; i < _words.size(); i++)
	{
		if (_visited[i] == true)
			continue;

		temp = 0;
		for (int j = 0; j < strlen(_words[i].c_str()); j++)
		{
			string tempStr = _words[i].c_str();
			if (_now.c_str()[j] != tempStr[j])
				temp++;

			if (temp > 1)
			{
				_visited[i] = false;
				break;
			}

			if (temp <= 1 && strlen(_words[i].c_str()) == (j + 1))
			{
				_visited[i] = true;
				result = DFSv1(_words[i], _starget, _words, _visited, _count + 1);
				_count--;
			}
		}
	}
	return result;
}

int DFS(string _now, string _starget, vector<string>& _words, bool* _visited, int _count)
{
	int result = 0; 
	if (!strcmp(_now.c_str(), _starget.c_str()))
	{
		return _count;
	}

	int temp = 0;
	for (int i = 0; i < _words.size(); i++)
	{
		if (_visited[i] == true)
			continue;
		
		temp = 0;
		for (int j = 0; j < strlen(_words[i].c_str()); j++)
		{
			string tempStr = _words[i].c_str();
			if (_now.c_str()[j] != tempStr[j])
				temp++;

			if (temp > 1)
			{
				_visited[i] = false;
				break;
			}

			if (temp <= 1 && strlen(_words[i].c_str()) == (j + 1))
			{
				_visited[i] = true;
				 result = DFS(_words[i], _starget, _words, _visited, _count+1);
				 _count--;
			}
		}
	}
	return result;
}

int solution(string begin, string target, vector<string> words) {
	int answer = words.size();

	//처음에 잡아 내기위한
	bool isNothing = true;
	for (int i = 0; i < words.size(); i++)
	{
		if (!strcmp(words[i].c_str(), target.c_str()))
		{
			isNothing = false;
			break;
		}
	}
	if (isNothing)
		return 0;
	//

	bool* visited;
	visited = new bool[words.size()]{ false };

	for (int i = 0; i < words.size(); i++)
	{
		for (int j = 0; j < words.size(); j++)
		{
			visited[j] = false;
		}
		if (Collect(begin, words[i]))
		{
			int tempAns;
			tempAns = DFSv1(words[i], target, words, visited, 0);

			if (tempAns != 0 && tempAns < answer)
				answer = tempAns;
		}
	}

	return answer;
}


int main()
{
	string begin, target;
	vector<string> words;
	int maxWordsNum;

	cin >> begin;
	cin >> target;

	Collect(begin, target);

	scanf("%d", &maxWordsNum);

	words.resize(maxWordsNum);

	for (int i = 0; i < maxWordsNum; i++)
	{
		cin >> words[i];
	}

	printf("%d", solution(begin, target, words));
	return 0;
}


