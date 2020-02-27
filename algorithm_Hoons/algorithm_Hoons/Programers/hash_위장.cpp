#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 0;
	//answer += clothes.size();
	int temp = 1;

	multimap<string, string> testMap;
	map<string, int> testMap2;

	for (int i = 0; i < clothes.size(); i++)
	{
		//testMap.insert(pair<string, string>(clothes[i][1], clothes[i][0]));

		if (testMap2.find(clothes[i][1]) == testMap2.end())
		{
			testMap2.insert(pair<string, int>(clothes[i][1], 1));
		}
		else
			testMap2[clothes[i][1]]++;
	}


		for (auto iter = testMap2.begin(); iter != testMap2.end(); iter++)
		{
			temp *= ((*iter).second +1);
		}
		answer += temp;
		answer -= 1;



	//sort(clothes.begin(), clothes.end());
	return answer;
}

int main()
{
	vector<vector<string>> tc;
	//tc.resize(3);
	

	tc = { {"yellow_hat", "headgear"},{"blue_sunglasses", "eyewear"},{"green_turban", "headgear"},{"green_turban2", "headgear"},{"green_turban3", "headgear"} };


	cout<<solution(tc);
	return 0;
}