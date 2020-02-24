//#include <iostream>
//#include <vector>
//
//using namespace std;
//int result = 0;
//int targetNum = 0;
//int Solution(vector<int>& _nums, int _target, int _index);
//
//int main()
//{
//	vector<int> nums;
//
//	int maxNum;
//	int temp;
//	
//
//	//ют╥б
//	cin >> maxNum;
//	for (int i = 0; i < maxNum; i++)
//	{
//		cin >> temp;
//		nums.push_back(temp);
//	}
//	cin >> targetNum;
//	//
//
//
//	//solution
//	Solution(nums, targetNum, 0);
//	
//	cout << result << endl;
//
//	return 0;
//}
//
//int Solution(vector<int>& _nums, int _target, int _index)
//{
//	if (_nums.size() <= _index && _target == 0)
//	{
//		result++;
//		return 1;
//	}
//	else if (_nums.size() <= _index)
//		return 1;
//
//	Solution(_nums, _target - _nums[_index], _index + 1);
//	Solution(_nums, _target + _nums[_index], _index + 1);
//
//	return 0;
//}
#include <string>
#include <vector>

using namespace std;

int dfs(vector<int>& _nums, int _target, int _index, int& _answer);



int solution(vector<int> numbers, int target) {
	int answer = 0;
	dfs(numbers, target, 0, answer);
	return answer;
}

int dfs(vector<int>& _nums, int _target, int _index, int& _answer)
{
	if (_nums.size() <= _index && _target == 0)
	{
		_answer++;
		return 0;
	}
	else if (_nums.size() <= _index)
		return 0;

	dfs(_nums, _target - _nums[_index], _index + 1, _answer);
	dfs(_nums, _target + _nums[_index], _index + 1, _answer);

	return 0;
}

int main()
{
	vector<int> a;

	for (int i = 0; i < 5; i++)
	{
		a.push_back(1);
	}

	printf("%d", solution(a, 3));
}