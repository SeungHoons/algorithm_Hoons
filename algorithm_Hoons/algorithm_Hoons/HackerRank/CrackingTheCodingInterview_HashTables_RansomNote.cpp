#include"stdafx.h"

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

bool ransom_note(vector<string> magazine, vector<string> ransom) {

	for (int j = 0; j< ransom.size(); j++)
	{
		for (int i = 0; i<magazine.size(); i++)
		{
			if (!strcmp(magazine[i].c_str(), ransom[j].c_str()))
			{
				magazine.erase(magazine.begin() + i);
				ransom.erase(ransom.begin() + j);
				if ((j + 1) == ransom.size())
				{
					return true;
				}
				//continue;
				j--;
				break;
			}
			
		}
	}
	return false;
}

int main() {
	int m;
	int n;
	cin >> m >> n;
	vector<string> magazine(m);
	for (int magazine_i = 0; magazine_i < m; magazine_i++) {
		cin >> magazine[magazine_i];
	}
	vector<string> ransom(n);
	for (int ransom_i = 0; ransom_i < n; ransom_i++) {
		cin >> ransom[ransom_i];
	}
	if (ransom_note(magazine, ransom))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
