#include <iostream>
#include<string>

using namespace std;

int main()
{
	int n; 
	int count = 0;
	int num = 666;
	string str;

	cin >> n;

	while (count != n)
	{
		str = to_string(num);
		
		for (int i = 0; i < str.size() - 2; i++)
		{
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			{
				count++;
				break;
			}
		}
		num++;

	}
	cout << num-1;
}