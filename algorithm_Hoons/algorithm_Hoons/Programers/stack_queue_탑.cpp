#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;

	answer.resize(heights.size());

	for (int i = heights.size()-1; i > 0; i--)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if (heights[i] < heights[j])
			{
				answer[i] = j+1;
				break;
			}
		}
	}

	return answer;
}

int main()
{
	vector<int> input;
	
	input = { 1, 5, 3, 6, 7, 6, 5 };

	input = solution(input);

	for (int i = 0; i < input.size(); i++)
		cout << input[i] << endl;
	return 0;
}