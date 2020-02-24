#define _CRT_SCEURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

bool* visit;
int g_answer;
set<int> g_set;

int toNum(string _str)
{
	int result = 0;
	int temp;
	bool isMinus = false;

	for (int i = 0; i < _str.size(); i++)
	{
		if (_str[i] == '-')
			isMinus = true;
		else
		{
			temp = _str[i] - '0';
			temp *= pow(10, isMinus ? ((_str.size() - 1) - i) : ((_str.size() - 1) - i));
			result += temp;
		}
	}


	return isMinus ? result * -1 : result;
}

void checkNum(string& numbers , string nowStr)
{
	bool end = false;
	int temInt = 0;
	if (nowStr.size() > 0)
	{
		temInt = toNum(nowStr);

		int tempNum = 2;
		while (1) { //무한루프 
			if (temInt == 1 || temInt == 0)
				break;

			if (tempNum <= sqrt(temInt)) {
				if (temInt %tempNum == 0) { //i가 나누어떨어지면 소수가 아님 
					break;
				}
				else {
					tempNum++;
				}
			}
			else { //i가 j보다 커질때까지 나누어떨어지지 않으면 소수 
				cout << temInt << endl;
				g_set.insert(temInt);
				break;
			}
		}
	}



	for (int i = 0; i < numbers.size(); i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			checkNum(numbers, nowStr + numbers[i]);
			visit[i] = false;
		}
	}
}

int solution(string numbers) {
	g_answer = 0;
	string a;

	visit = new bool[numbers.size()]{ false };
	checkNum(numbers, a);

	return g_set.size();
}

int main()
{
	string input;

	input = "17";

	cout<<solution(input);
	return 0;
}