#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int N, K;
	bool nums[1001] = { false };
	cin >> N >> K;

	if (N == 1)
	{
		cout << '1';
		return 0;
	}

	for (int i = 1; i <= N; i++)
	{
		nums[i] = true;
	}

	for (int count = 0, i = 2; i <= N; i++)
	{
		
		if (nums[i] == true)
		{
			int magni = 1;
			while (i*magni <= N)
			{
				if (nums[i * magni] == true)
				{
					nums[i * magni] = false;
					//cout << i * magni << '\n';
					count++;
					if (count == K)
					{
						cout << i*magni;
						return 0;
					}
				}
				magni++;
			}

		}
	}
}