// Class_sga.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//vector <int> leftRotation(vector <int> a, int d) {
//	// Complete this function
//	int temp = 0;
//	while (--d)
//	{
//		temp = a[0];
//		for (int i = 1; i < a.size(); i++)
//		{
//			a[i-1] = a[i];
//		}
//		a[(a.size() - 1)] = temp;
//	}
//	
//	return a;
//}

vector <int> leftRotation(vector <int> a, int d) {
	// Complete this function
	int temp = 0;
	while (d--)
	{
		temp = a[0];
		a.erase(a.begin());
		a.push_back(temp);

	}

	return a;
}

int main() {
	int n;
	int d;
	cin >> n >> d;
	vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		cin >> a[a_i];
	}
	vector <int> result = leftRotation(a, d);
	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i] << (i != result.size() - 1 ? " " : "");
	}
	cout << endl;


	return 0;
}
