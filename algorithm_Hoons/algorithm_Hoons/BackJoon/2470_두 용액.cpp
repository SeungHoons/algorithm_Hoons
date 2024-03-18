#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	int N;
	vector<int> vec;

	cin >> N;
	vec.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	int j = N - 1;
	int k = 0;
	int nowVal=0;
	int min = 2000000003;
	string strMin;
	while (k<j)
	{
		nowVal = vec[k] + vec[j];
		if (min > abs(nowVal))
		{
			min = abs(nowVal);
			//strMin = vec[k] + " " + vec[j];
			
			strMin = to_string(vec[k]);
			strMin += " ";
			strMin += to_string(vec[j]);
		}

		
		if (nowVal == 0)
		{
			cout << vec[k] << " " << vec[j];
			return 0;
		}
		else if (nowVal < 0)
			k++;
		else if (nowVal > 0)
			j--;
	}

	cout << strMin;
}