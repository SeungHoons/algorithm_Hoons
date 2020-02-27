#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution2(vector<string> participant, vector<string> completion)
{
	string answer;
	int tempIndex = 0;

	while (completion.size()>0)
	{
		for (int i = 0; i < participant.size(); i++)
		{
			for (int j = 0; j < completion.size(); j++)
			{
				if (participant[i] == completion[j])
				{
					participant.erase(participant.begin() + i);
					completion.erase(completion.begin() + j);
					break;
				}
			}
		}
	}
	answer = participant[0];
	return answer;
}

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, int> playerMap;
	for (int i = 0; i < participant.size(); i++)
	{
		if (playerMap.find(participant[i]) == playerMap.end())
		{
			playerMap[participant[i]] = 1;
		}
		else
		{
			playerMap[participant[i]]++;
		}
	}

	for (int i = 0; i < completion.size(); i++)
	{
		playerMap[completion[i]]--;
	}
	
	for (auto iter = playerMap.begin(); iter != playerMap.end(); iter++)
	{
		if ((*iter).second >0)
		{
			answer += (*iter).first;
			answer += " ";
		}
	}


	return answer;
}

int main()
{
	vector<string> firstInput, secondInput;
	firstInput = { "mislav", "stanko", "mislav", "ana" };
	secondInput = { "stanko", "ana", "mislav" };
	cout<<solution2(firstInput, secondInput);
	return 0;
}