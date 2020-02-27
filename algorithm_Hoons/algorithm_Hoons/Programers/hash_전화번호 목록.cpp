#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	vector<string> tempStr = phone_book;
	//sort(tempStr.begin(), tempStr.end());

	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int j = 0; j < phone_book.size(); j++)
		{
			if (i==j || tempStr[i].size() > phone_book[j].size())
				continue;
			for (int k = 0; k < tempStr[i].size(); k++)
			{
				if (tempStr[i][k] == phone_book[j][k])
				{
					if (tempStr[i].size() - 1 == k)
					{
						return false;
					}
						continue;
				}
				break;
			}
		}
	}
		return answer;
}

int main() {
	vector<string> pb, pb2;

	//pb = { "119332","119", "97674223", "1195524421" };
	pb = { "111113","1112","12" };
	//pb = { "1","1" };
	//pb = { "113" ,"12340","123440","12345","98346" };

	cout<< (solution(pb)? "°ãÄ¡Áö ¾Ê´Â´Ù," : "°ãÄ£´Ù.");

	return 0;
}