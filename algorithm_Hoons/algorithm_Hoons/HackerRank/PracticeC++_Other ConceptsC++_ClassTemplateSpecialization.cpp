#include <stdafx.h>

#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;	

// Define specializations for the Traits class template here.

template<typename T>
class Traits {
	static string name(int n) { return "unknown"; };
};

template <>
class Traits<Color>
{
private:
	int a;
public:
	static char* name(int a)
	{
		if (a >= 3 || a < 0)
			return "unKonwn";
		else if (a == 0)
			return "red";
		else if (a == 1)
			return "green";
		else
			return "orange";
	}
};

template <>
class Traits<Fruit>
{
private:
	int a;
public:
	static char* name(int a)
	{
		if (a >= 3 || a < 0)
			return "unKonwn";
		else if (a == 0)
			return "apple";
		else if (a == 1)
			return "orange";
		else
			return "pear";
	}
};

int main()
{
	int t = 0; std::cin >> t;

	for (int i = 0; i != t; ++i) {
		int index1; std::cin >> index1;
		int index2; std::cin >> index2;
		cout << Traits<Color>::name(index1) << " ";
		cout << Traits<Fruit>::name(index2) << "\n";
	}
}