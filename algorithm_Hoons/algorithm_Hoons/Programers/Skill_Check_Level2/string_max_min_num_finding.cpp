#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string toString(int _num)
{
	string result;

	char a[125];
	int i = 0; 

	if (_num < 0)
	{
		result += "-";
		_num *= -1;
	}

	while (_num)
	{
		a[i] = (_num % 10) +'0';
		i++;
		_num /= 10;
	}

	i--;
	for (int j = i; j >= 0; j--)
	{
		result += a[j];
	}

	return result;
}

int toNum(string _str)
{
	int result=0;
	int temp;
	bool isMinus = false;

	for (int i = 0; i < _str.size(); i++)
	{
		if (_str[i] == '-')
			isMinus = true;
		else
		{
			temp = _str[i] - '0';
			temp *= pow(10, isMinus ? ((_str.size() - 1) - i) : ((_str.size() - 1) - i));
			result += temp;
		}
	}


	return isMinus ? result*-1 : result;
}

string solution(string s) {
	string answer = "";
	vector<int> nums;

	string temp;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ' )
		{
			nums.push_back(toNum(temp));
			temp.clear();
			continue;
		}

		temp += s[i];

		if (i == s.size() - 1)
		{
			nums.push_back(toNum(temp));
			break;
		}
	}
	sort(nums.begin(), nums.end());
	
	answer += toString(nums[0]);
	answer += ' ';
	answer += toString(nums[nums.size() - 1]);

	return answer;
}

int main()
{
	string input;
	input = "-100 -2 -3 -4";

	cout<<solution(input);
	return 0;
}