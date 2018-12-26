#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>



using namespace std;

int number_needed(string a, string b) 
{
	int sum =0;
	int num['z'-'a'+1] = { 0 };
	for (auto p : a)
	{
		if (isupper(p))			//isupper 해당 캐릭터가 대문자인지 확인 대문자이면 1을 리턴
		{
			num['Z' - p ]++;
		}
		else
		{
			num['z' - p]++;
		}
	}

	for (auto p : b)
	{
		if (isupper(p))
		{
			num['Z' - p]--;
		}
		else
		{
			num['z' - p]--;
		}
	}

	for (auto aa : num)
	{
		sum += (aa > 0) ? aa : (-aa);
	}
	return sum;
}

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	cout << number_needed(a, b) << endl;
	return 0;
}
