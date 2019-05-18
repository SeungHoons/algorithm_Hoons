#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


//using namespace std;

//int main()
//{
//	int m , n;
//	int five = 0;
//	int two = 0;
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = n-m ; i <= n; i++)
//	{
//		if (i % 2 == 0 && i !=0 )
//		{
//			int temp = i;
//			while (true)
//			{
//				if (temp / 2 == 0 || temp % 2 != 0)
//					break;
//				temp /= 2;
//				two++;
//			}
//		}
//
//		if (i % 5 == 0 && i != 0)
//		{
//			int temp = i;
//			while (true)
//			{
//				if (temp / 5 == 0 || temp % 5 != 0)
//					break;
//				temp /= 5;
//				five++;
//			}
//
//		}
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		if (i % 2 == 0 && i != 0)
//		{
//			int temp = i;
//			while (true)
//			{
//				if (temp / 2 == 0 || temp % 2 != 0)
//					break;
//				temp /= 2;
//				two--;
//			}
//		}
//
//		if (i % 5 == 0 && i != 0)
//		{
//			int temp = i;
//			while (true)
//			{
//				if (temp / 5 == 0 || temp % 5 != 0)
//					break;
//				temp /= 5;
//				five--;
//			}
//
//		}
//	}
//
//	printf("%d", five <= two ? five : two);
//	return 0;
//}

#include <algorithm>
using namespace std;
int main() {
	long long two = 0, five = 0;
	long long n, m;
	cin >> n >> m;
	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}
	for (long long i = 2; i <= n - m; i *= 2) {
		two -= (n - m) / i;
	}
	for (long long i = 2; i <= m; i *= 2) {
		two -= m / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		five += n / i;
	}
	for (long long i = 5; i <= n - m; i *= 5) {
		five -= (n - m) / i;
	}
	for (long long i = 5; i <= m; i *= 5) {
		five -= m / i;
	}
	cout << min(two, five) << '\n';
	return 0;
}