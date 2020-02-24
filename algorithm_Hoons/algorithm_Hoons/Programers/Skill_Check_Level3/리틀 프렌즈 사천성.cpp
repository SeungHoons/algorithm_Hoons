//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
///*
//	DFS로 하나씩 찾아서 끝내는 걸로.
//*/
//
//bool** visited = NULL;
//
//enum Direction
//{
//	left,
//	right,
//	up,
//	down,
//	empty
//};
//
//void DFS(vector<string> _board, int _ni, int _nj, int _targeti, int _targetj , bool turn ,Direction _dir )
//{
//
//
//	if (_board[_ni][_nj] == _board[_targeti][_targetj] || _board[_ni][_nj] == '.')
//	{
//		for (int i = 0; i < _board.size(); i++)
//		{
//			for (int j = 0; j < _board[0].size(); j++)
//			{
//				if (_targeti == i && _targetj == j)
//					continue;
//				if (visited[i][j] == false)
//				{
//					visited[i][j] == true;
//					//DFS(_board, );
//					//visited[i][j] == false;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < _board.size(); i++)
//	{
//		for (int j = 0; j < _board[0].size(); j++)
//		{
//			if (visited[i][j] == false)
//			{
//				visited[i][j] == true;
//				//DFS(_board, );
//				//visited[i][j] == false;
//			}
//		}
//	}
//}
//
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//string solution(int m, int n, vector<string> board) {
//	string answer = "";
//	
//	visited = new bool*[m];
//	for (int i = 0; i < m; i++)
//	{
//		visited[i] = new bool[n] {false};
//	}
//
//	string tempStr;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (board[i][j] == '.')
//				continue;
//			//상
//			if (i > 0)
//			{
//				if (board[i][j] == board[i - 1][j])
//				{
//					tempStr += (board[i][j]);
//					board[i][j] = '.';
//					board[i - 1][j] = '.';
//				}
//			}
//
//			//하
//			if (i < m-1)
//			{
//				if (board[i][j] == board[i+1][j])
//				{
//					tempStr += (board[i][j]);
//
//					board[i][j] = '.';
//					board[i + 1][j] = '.';
//				}
//			}
//
//			//좌
//			if (j > 0)
//			{
//				if (board[i][j] == board[i][j - 1])
//				{
//					tempStr += (board[i][j]);
//
//					board[i][j] = '.';
//					board[i][j - 1] = '.';
//				}
//			}
//			
//			//우
//			if (j < n - 1)
//			{
//				if (board[i][j] == board[i][j + 1])
//				{
//					tempStr += (board[i][j]);
//
//					board[i][j] = '.';
//					board[i][j + 1] = '.';
//				}
//			}
//		}
//	}
//
//	
//
//
//	//sort(answer.begin(), answer.end());
//	return answer;
//}
//
//
//int main()
//{
//	vector<string> input1;
//
//	input1.push_back("DBA");
//	input1.push_back("C*A");
//	input1.push_back("CDB");
//
//	solution(3,3,input1);
//
//	return 0;
//}


#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>
#include <set>
using namespace std;
struct _d { char c; int y, x; };
struct _q { int y, x, d; };
bool operator<(const _d& a, const _d& b) {
	return a.c < b.c;
}
string solution(int m, int n, vector<string> board) {
	string answer = "";
	int i, j, bef, aft, dy[] = { 0,1,0,-1 }, dx[] = { 1,0,-1,0 }, matched, vi[100][100][4], chk[26] = {};
	queue<_q> q;
	set<_d> list;
	for (i = 0; i < m; i++) for (j = 0; j < n; j++)
		if ('A' <= board[i][j] && board[i][j] <= 'Z') {
			list.insert(_d{ board[i][j],i,j });
			chk[board[i][j] - 'A'] = 1;
		}

	do {
		bef = (int)list.size();
		for (auto it = list.begin(); it != list.end(); it++) {
			memset(vi, 0x7F, sizeof vi);
			while (!q.empty()) q.pop();

			for (i = 0; i < 4; i++) {
				vi[it->y][it->x][i] = 0;
				q.push(_q{ it->y, it->x, i });
			}
			matched = 0;
			while (!q.empty() && !matched) {
				_q u = q.front(); q.pop();
				for (i = 0; i < 4; i++) {
					int ty = u.y + dy[i], tx = u.x + dx[i], used = i != u.d;
					if (0 <= ty && ty < m && 0 <= tx && tx < n && vi[u.y][u.x][u.d] + used < 2 && vi[ty][tx][i] > vi[u.y][u.x][u.d] + used && board[ty][tx] != '*' && (board[ty][tx] == '.' || board[ty][tx] == it->c)) {
						vi[ty][tx][i] = vi[u.y][u.x][u.d] + used;
						q.push(_q{ ty,tx,i });
						if (board[ty][tx] == it->c) {
							matched = 1;
							board[it->y][it->x] = board[ty][tx] = '.';
						}
					}
				}
			}
			if (matched) {
				answer += it->c;
				list.erase(it);
				break;
			}
		}
		aft = (int)list.size();
	} while (bef != aft);
	if (!list.empty()) answer = "IMPOSSIBLE";
	return answer;
}

int main()
{
	vector<string> input1;

	input1.push_back("DBA");
	input1.push_back("C*A");
	input1.push_back("CDB");

	cout<<solution(3,3,input1);

	return 0;
}