#include <iostream>

using namespace std;


int n;

int fivonachi(int val1, int val2, int _count)
{
	if (_count == n)
	{
		return val1;
	}
	_count++;

	return fivonachi(val2, val1 + val2, _count);
}

int main()
{

	cin >> n;

	if (n == 0)
		cout << 0;
	else
		cout << fivonachi(0, 1, 0);
}