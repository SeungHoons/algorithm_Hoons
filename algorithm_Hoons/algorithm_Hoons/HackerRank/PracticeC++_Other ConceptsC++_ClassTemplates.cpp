#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
using namespace std;

/*Write the class AddElements here*/
template <typename T>
class AddElements
{
private:
	T xpos , ypos;
public:
	AddElements(T x) :xpos(x)
	{

	}


	T add(T ypos)
	{
		retrun xpos + ypos;
	}
	T concatenate(T ypos)
	{
		retrun xpos + ypos;
	}

};

int main() {
	int n, i;
	cin >> n;
	for (i = 0; i<n; i++) {
		string type;
		cin >> type;
		if (type == "float") {
			double element1 , element2;
			cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			cout << myfloat.add(element2) << endl;
		}
		else if (type == "int") {
			int element1, element2;
			cin >> element1 >> element2;
			AddElements<int> myint(element1);
			cout << myint.add(element2) << endl;
		}
		else if (type == "string") {
			string element1, element2;
			cin >> element1 >> element2;
			AddElements<string> mystring(element1);
			cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}
