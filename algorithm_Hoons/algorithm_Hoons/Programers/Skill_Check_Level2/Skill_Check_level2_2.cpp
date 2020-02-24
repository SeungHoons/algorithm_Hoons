#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

vector<char> people;
int visited[8];
int answer;

void permutation(string result, vector<string> data, int cnt)
{
	if (cnt == 8)
	{
		cout<<result<<endl;
		for (int i = 0; i < data.size(); i++)
		{
			int p1Idx, p2Idx;

			// result에서, 조건에 있는 두사람의 인덱스를 찾음
			for (int j = 0; j < 8; j++)
			{
				if (result[j] == data[i][0])
				{
					p1Idx = j;
				}
				else if (result[j] == data[i][2])
				{
					p2Idx = j;
				}
			}

			if (data[i][3] == '>')
			{
				if (!(abs(p1Idx - p2Idx) - 1 > data[i][4] - '0'))
				{
					//cout << result << endl;
					return;
				}
			}
			else if (data[i][3] == '=')
			{
				if (!(abs(p1Idx - p2Idx) - 1 == data[i][4] - '0'))
				{
					//cout << result << endl;
					return;
				}
			}
			else if (data[i][3] == '<')
			{
				if (!(abs(p1Idx - p2Idx) - 1 < data[i][4] - '0'))
				{
					//cout << result << endl;
					return;
				}
			}
			//answer++;
		}

		answer++;

		return;
	}

	for (int i = 0; i < 8; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			permutation(result + people[i], data, cnt + 1);
			visited[i] = 0;
		}
	}
}

int solution(int n, vector<string> data)
{
	// 전역변수 초기화
	people.push_back('A');
	people.push_back('C');
	people.push_back('F');
	people.push_back('J');
	people.push_back('M');
	people.push_back('N');
	people.push_back('R');
	people.push_back('T');
	memset(visited, 0, sizeof(visited));
	answer = 0;

	permutation("", data, 0);

	return answer;
}

int main()
{
	vector<string> test;
	test.resize(2);

	//test[0] = "N~F=0";
	//test[1] = "R~T>2";

	test[0] = "M~C<2";
	test[1] = "C~M>1";

	cout<<solution(2, test);
	//cout << answer;
	return 0;
}