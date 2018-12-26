#include "stdafx.h"

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	int input1 = 0;
//	int input2 = 0;
//	char c1[1000][20] = { 0, };
//	char c2[1000][20] = { 0, };
//	//string s1[1000];
//	//string s2[1000];
//	int count[1000] = { 0, };
//
//	cin >> input1;
//	for (int i = 0; i < input1; i++)
//	{
//		scanf_s("%s", c1[i],20);
//	}
//	cin >> input2;
//	for (int i = 0; i < input2; i++)
//	{
//		scanf_s("%s", c2[i], 20);
//	}
//
//	for (int i = 0; i < input1; i++)
//	{
//		for (int j = 0; j < input2; j++)
//		{
//			if (!strcmp(c1[i],c2[j]))
//			{
//				count[j]++;
//			}
//		}
//	}
//
//	for (int i = 0; i < input2; i++)
//	{
//		cout << count[i] << endl;
//	}
//
//
//	return 0;
//}



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int input1 = 0;
	int input2 = 0;
	char c1[1000][20] = { 0, };
	char c2[1000][20] = { 0, };
	//string s1[1000];
	//string s2[1000];
	int count[1000] = { 0, };

	cin >> input1;
	for (int i = 0; i < input1; i++)
	{
		//scanf("%s", c1[i],sizeof(c1[i]));
		cin >> c1[i];
	}
	cin >> input2;
	for (int i = 0; i < input2; i++)
	{
		//scanf("%s", c2[i],sizeof(c2[i]));
		cin >> c2[i];
	}

	for (int i = 0; i < input1; i++)
	{
		for (int j = 0; j < input2; j++)
		{
			//if (!strcmp(c1[i],c2[j]))
			if (((c2[j]) == c1[i])&& c2[j]!=0)
			{
				count[j]++;
			}
		}
	}

	for (int i = 0; i < input2; i++)
	{
		cout << count[i] << endl;
	}


	return 0;
}