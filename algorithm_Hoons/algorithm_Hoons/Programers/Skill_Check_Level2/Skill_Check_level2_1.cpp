#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

bool check(int a, int b)
{
	if (a + 1 == b)
		if (a % 2 == 1)
			return true;
		
	return false;
}
int solution(int n, int a, int b)
{
	int answer = 1;

	bool* player;
	player = new bool[n];

	int lestPlyaer = n;
	while (true)
	{
		lestPlyaer /= 2;
		answer++;
		a = ((float)a / 2) + 0.5f;
		b = ((float)b / 2) + 0.5f;

		if (check(a, b))
			break;
		if (check(b, a))
			break;
	}

	return answer;
}

int main()
{

	cout << solution(8, 4, 7);
	return 0;
}