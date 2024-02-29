#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int N, M, answer;
vector<int> vec;

int main()
{
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	
	cin >> N;
	cin >> M;
	answer = 0;

	int temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	int j = vec.size() -1; 
	int maxN = 0;
	while (maxN < j)
	{
		if (vec[maxN] + vec[j] == M)
		{
			answer++;
			maxN++;
			j--;
		}
		else if (vec[maxN] + vec[j] < M)
		{
			maxN++;
		}
		else if (vec[maxN] + vec[j] > M)
		{
			j--;
		}
	}

	cout << answer;
}