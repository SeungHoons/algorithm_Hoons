#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct testStr
{
	int age;
	string name;
};

bool cmp(const testStr &u, const testStr &v) {
	return u.age < v.age;
}
int main()
{
	int testCase;
	vector<testStr> b;
	

	cin >> testCase;
	b.resize(testCase);

	for (int i = 0; i < testCase; i++)
	{
		cin >> b[i].age >> b[i].name;
	}

	stable_sort(b.begin(), b.end(),cmp);

	for (int i = 0; i < testCase; i++)
	{
		cout << b[i].age << " " << b[i].name << "\n";

	}
	
	return 0;
}