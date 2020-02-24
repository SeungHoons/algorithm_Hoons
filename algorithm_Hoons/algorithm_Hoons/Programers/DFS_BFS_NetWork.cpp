#include <string>
#include <vector>
#include <queue>

using namespace std;

void Check(vector<vector<int>>& _computers, queue<int>& _serch, bool* _serched, int _n);
int solution(int n, vector<vector<int>> computers) {
	int answer = 0;
	queue<int> serch;
	bool* serched = new bool[n] {false};

	for (int i = 0; i < n; i++)
	{
		if (!serched[i])
		{
			serched[i] = true;

			for (int j = 0; j < n; j++)
			{
				if (computers[i][j] && serched[j] == false)
				{
					serch.push(j);
					serched[j] = true;
				}
			}
			answer++;
		}

		while (serch.size() > 0)
		{
			Check(computers, serch, serched, n);
		}

	}

	return answer;
}

void Check(vector<vector<int>>& _computers, queue<int>& _serch,bool* _serched, int _n)
{
	int temp = _serch.front();
	_serch.pop();

	for (int i = 0; i < _n; i++)
	{
		if (_computers[temp][i] && _serched[i] == false)
		{
			_serch.push(i);
			_serched[i] = true;
		}
	}
}

int main()
{
	vector<vector<int>>  d;
	
	d.resize(3);
	for (int i = 0; i < 3; i++)
	{
		d[i].resize(3);
	}
	d[0][0] = 1;
	d[0][1] = 1;
	d[0][2] = 0;

	d[1][0] = 1;
	d[1][1] = 1;
	d[1][2] = 0;

	d[2][0] = 0;
	d[2][1] = 0;
	d[2][2] = 1;

	printf("%d", solution(3,d));

	return 0;
}