#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <string.h>
#include <algorithm>

using namespace std;

void dfs(int x);
void bfs(int x);
bool Check[1001];
queue<int> bfs_que;
//stack<int> dfs_sta;
vector<int> a[1001];
int jungJum;
int ganSun;
int V;

int main()
{
	

	scanf("%d %d %d", &jungJum, &ganSun, &V);

	for (int i = 0; i < ganSun; i++)
	{
		int jung, jung2;
		scanf("%d %d", &jung, &jung2);
		a[jung].push_back(jung2);
		a[jung2].push_back(jung);
	}
	for (int i = 1; i <= jungJum; i++) {
		sort(a[i].begin(), a[i].end());
	}
	dfs(V);
	memset(Check, false, sizeof(Check));
	printf("\n");
	bfs(V);
	return 0;
}

void dfs(int x)
{
	Check[x] = true;
	printf("%d ", x);

	for (int i = 0; i < a[x].size(); i++)
	{
		if (Check[a[x][i]] == false)
		{
			dfs(a[x][i]);
		}
	}
}

void bfs(int x)
{
	Check[x] = true;
	bfs_que.push(x);
	while (bfs_que.size()!=0)
	{
		int node = bfs_que.front();

		printf("%d ", node);
		bfs_que.pop();
		for (int i = 0; i < a[node].size(); i++)
		{
			int next = a[node][i];
			if (Check[next] == false)
			{
				bfs_que.push(next);
				Check[next] = true;
			}
		}
	}
}