#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool checkNum(string _num)
{
	int num = stoi(_num);

	if (num == 0 || num == 1)
		return false;

	int sqrtNum = sqrt(num);
	for (int i = 2; i <= sqrtNum; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int solution(string numbers) {
	int answer = 0;
	int temp = 0;
	
	string nowNum;
	nowNum.resize(numbers.size());
	vector<bool> visited;

	sort(numbers.begin(), numbers.end(), greater<char>());
	visited.resize(stoi(numbers)+1, false);

	sort(numbers.begin(), numbers.end());
	int index = 0;
	do 
	{
		for (int i = 0; i < numbers.size(); i++)
		{
			nowNum = numbers.substr(0, i + 1);
			if (checkNum(nowNum) && visited[stoi(nowNum)] == false)
			{
				visited[stoi(nowNum)] = true;
				answer++;
			}
		}
	} while (next_permutation(numbers.begin(), numbers.end()));

	return answer;
}
bool next_permutation2(int *a, int n) {
	int i = n - 1;                    // 뒤부터 시작 
	while (i > 0 && a[i] <= a[i - 1])  // 어디까지가 감소수열인가?? 
		i -= 1;
	if (i <= 0)                    // 전체가 감소수열이다. 
		return false;                // 다음 수열은 존재하지 않는다.
	int j = n - 1;
	while (a[i - 1] >= a[j])
		j -= 1;
	swap(a[i - 1], a[j]);                // 찾은 수의 바로 앞 swap i-1 
	j = n - 1;                        // j는 마지막 
	while (i < j) {                    // i-1 이후로, swap해줌 
		swap(a[i], a[j]);
		i += 1;
		j -= 1;
	}
	return true;
}

int main()
{
	string input;
	//int a[] = { 1,2,3,4,5 };
	int a[] = {0,1,1,2,5 };


	input = { "17" };

	cout<<solution(input);
	return 0;
}


