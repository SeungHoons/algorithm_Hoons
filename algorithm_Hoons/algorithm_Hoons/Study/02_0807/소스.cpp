#include <iostream>

using namespace std;

int main()
{
	int* a;
	int b = 20;
	
	a = &b;

	cout << a << endl;

	memset(a, NULL, sizeof(int*));
	
	cout << a << endl;
	return 0;
}