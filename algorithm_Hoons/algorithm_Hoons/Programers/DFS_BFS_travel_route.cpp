#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> DFSv2(vector<vector<string>> _tickets, vector<string> _history, string _nowString, vector<bool> _usedTickets)
{
	vector<string> answer;

	if (_history.size() == _tickets.size())
	{
		_history.push_back(_nowString);
		return _history;
	}
	for (int i = 0; i < _tickets.size(); i++)
	{
		if (_usedTickets[i] == true)
			continue;
		if (_tickets[i][0] == _nowString)
		{
			_usedTickets[i] = true;
			_history.push_back(_tickets[i][0]);
			answer = DFSv2(_tickets, _history, _tickets[i][1], _usedTickets);

			if (answer.size() == _tickets.size() + 1)
				break;
			else
			{
				if (answer.size() > 0)
					answer.pop_back();
			}
			_history.pop_back();
			_usedTickets[i] = false;
		}
	}

	return answer;
}
vector<string> DFS(vector<vector<string>> _tickets ,vector<string>_histroy, int _index, vector<bool> _usedTicket)
{
	//들어온거 처리.
	_histroy.push_back(_tickets[_index][0]);


	// 코드 만들어지는대로 바꿔야함
	if (_tickets.size()  == _histroy.size())
	{
		_histroy.push_back(_tickets[_index][1]);
		return _histroy;
	}

	for (int i = 0; i < _tickets.size(); i++)
	{
		if (_usedTicket[i] == true)
			continue;

		if (_tickets[_index][1] == _tickets[i][0])
		{
			_usedTicket[_index] = true;
			return _histroy = DFS(_tickets, _histroy, i, _usedTicket);
		}
	}
}

vector<string> solution(vector<vector<string>> tickets) {
	vector<string> answer;
	vector<bool> usedTickets;

	sort(tickets.begin(), tickets.end());	
	usedTickets.resize(tickets.size(), false);
	answer = DFSv2(tickets, answer, "ICN", usedTickets);
	return answer;
}

int main()
{
	vector<vector<string>> tickets;
	vector<string> ans;
	int ticketNum;

	cin >> ticketNum;
	tickets.resize(ticketNum);

	for (int i = 0; i < ticketNum; i++)
	{
		tickets[i].resize(2);
		for (int j = 0; j < 2; j++)
		{
			cin >> tickets[i][j];
		}
	}
	ans = solution(tickets);

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}