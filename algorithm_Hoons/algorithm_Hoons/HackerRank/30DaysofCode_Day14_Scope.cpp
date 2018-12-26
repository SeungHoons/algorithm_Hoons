#include"stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;
	
public:
	int maximumDifference;
	unsigned int temp[2] = { 0,0 };

	Difference(vector<int> a)
	{
		 elements =a;
	}

	void computeDifference()
	{
		for (int i = 1; i<elements.size(); i++)
		{
			for (int j = i; j<elements.size(); j++)
			{
				temp[0] =abs( elements[i - 1] - elements[j]);
				if (temp[0]>temp[1])
				{
					temp[1] = temp[0];
				}
			}

		}
		maximumDifference = temp[1];
	}
}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}