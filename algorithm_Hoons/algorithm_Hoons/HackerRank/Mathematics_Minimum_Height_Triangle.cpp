#include "stdafx.h"

#include <iostream>
#include<time.h>
#include<stdlib.h>
#include <math.h>


using namespace std;

int lowestTriangle(int base, int area) {
	// Complete this function
	double base2 =base;
	double area2= area;
	double height = 0;
	int result = 0;

	height = ((2 * area2) / base2)+0.5;

	result = height;
	if (result <= 0)result = 1;
	return result;
}

int main() {
	int base;
	int area;
	cin >> base >> area;
	int height = lowestTriangle(base, area);
	cout << height << endl;
	return 0;
}
