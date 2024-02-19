#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N =0;
	int M =0;


	cin >> N;
	cin >> M;

	int** s;

	s = new int*[N];

	for (int i = 0; i < N; i++)
	{
		s[i] = new int[M];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> s[i][j];
		}
	}

	int tempN;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> tempN;
			s[i][j] += tempN;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << s[i][j]<<" ";
		}
		cout << endl;
	}
}