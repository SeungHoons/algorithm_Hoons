#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);
	string str;


	getline(cin, str);

	int firstIndex = 0;
	bool inBracket = false;
	int lastIndex = 0;
	stack<char> stkChar;
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '<')
		{
			if (stkChar.size() != 0)
			{
				while (stkChar.size() != 0)
				{
					cout<<stkChar.top();
					stkChar.pop();
				}
			}

			firstIndex = i;
			inBracket = true;
		}
		if (str[i] == '>')
		{
			for (int j = firstIndex; j <= i; j++)
			{
				cout << str[j];
			}
			inBracket = false;
			continue;
		}

		if (!inBracket)
		{
			if(str[i] != ' ')
				stkChar.push(str[i]);
		}
		if (str[i] == ' ' && !inBracket)
		{
			if (stkChar.size() != 0)
			{
				while (stkChar.size() != 0)
				{
					cout << stkChar.top();
					stkChar.pop();
				}
			}
			cout << str[i];
		}

	}
	if (stkChar.size() != 0)
	{
		while (stkChar.size() != 0)
		{
			cout << stkChar.top();
			stkChar.pop();
		}
	}
}