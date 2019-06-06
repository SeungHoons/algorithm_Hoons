#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct info
{
	string name;
	int kor;
	int eng;
	int mat;
};

bool cmp(const info& a, const info& b)
{

	if (a.kor > b.kor)
		return true;
	else if (a.kor == b.kor)
	{
		if (a.eng < b.eng)
			return true;
		else if (a.eng == b.eng)
		{
			if (a.mat > b.mat)
				return true;
			else if (a.mat == b.mat)
			{
				if (a.name < b.name)
					return true;

			}
		}
	}
	return false;
}

int main()
{
	int testCase;
	vector<info> v_info;
	static int state = 0;

	cin >> testCase;
	v_info.resize(testCase);

	for (int i = 0; i < testCase; i++)
	{
		cin >> v_info[i].name >> v_info[i].kor >> v_info[i].eng >> v_info[i].mat;
	}

	sort(v_info.begin(), v_info.end(), cmp);

	for (int i = 0; i < testCase; i++)
	{
		cout<< v_info[i].name<<"\n";
	}

	return 0;
}