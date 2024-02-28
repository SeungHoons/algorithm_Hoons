#include <iostream>
#include <queue>

using namespace std;

int N;
queue<int> que;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		que.push(i);
	}

	while (que.size() > 1 )
	{
		//cout << que.front();
		que.pop();

		if (que.size() == 1)
			break;
		que.push(que.front());
		que.pop();
	}

	cout << que.front();
}