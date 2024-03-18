#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	stack<int> stkNums;
	int K;
	int answer = 0;

	cin >> K;

	for (int input,i = 0; i < K; i++)
	{
		cin >> input;

		if (input != 0)
			stkNums.push(input);
		else if (input == 0)
			stkNums.pop();
	}

	int numSize = stkNums.size();
	for (int i = 0; i < numSize; i++)
	{
		answer += stkNums.top();
		stkNums.pop();
	}
	cout << answer;
}