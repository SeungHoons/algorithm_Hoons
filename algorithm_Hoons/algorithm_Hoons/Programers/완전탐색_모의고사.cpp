#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int count = 0;
	vector<vector<int>> tester;
	vector<pair<int, int>> rank;

	tester = { {1, 2, 3, 4, 5}, { 2, 1, 2, 3, 2, 4, 2, 5},{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5} };
	rank.resize(3);

	for (int i = 0; i < 3; i++)
	{
		count = 0;
		for (int j = 0; j < answers.size(); j++)
		{
			if (answers[j] == tester[i][j%tester[i].size()])
			{
				count++;
			}
		}
		rank[i].first = -count;
		rank[i].second = i+1;
	}

	sort(rank.begin(), rank.end());

	answer.push_back(rank[0].second);
	if (rank[0].first == rank[1].first)
		answer.push_back(rank[1].second);
	if (rank[0].first == rank[2].first)
		answer.push_back(rank[2].second);


	return answer;
}

int main()
{
	vector<int> input;

	input = { 1,2,3,4,5,4,2,2};

	input = solution(input);
	for (int i = 0; i < input.size(); i++)
	{
		cout << input[i] << endl;
	}
	return 0;
}