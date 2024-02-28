#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int N;
string* str;
stack<char> stc;
int answer = 0;


void Sol()
{	
	for (int i = 0; i < N; i++)
	{
		while (!stc.empty())
		{
			stc.pop();
		}

		for (int j = 0; j < str[i].size(); j++)
		{
			if (stc.empty() || stc.top() != str[i][j])
			{
				stc.push(str[i][j]);
			}
			else
			{
				stc.pop();
			}
		}
		stc.size() == 0 ? answer++ : 0;
	}
}

int main()
{
	cin >> N;

	str = new string[N];

	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}
	Sol();

	cout << answer;
}