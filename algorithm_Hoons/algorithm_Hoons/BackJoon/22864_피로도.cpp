#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);


	//A 피로도
	//B 피로도당 일처리량
	//C 휴식(피로도-)
	//M 피로도 최대치
	//24시간 기준

	//5 3 2 10  >> 24

	/*5 * 2 = 3 * 2;
	22시간;
	휴식 5시간 -> 17;
	7시간 마다 6일처리;
	3 * 7 = 21;
	3시간 남는데 2시간 +
		18 + 6;
	24; 1시간 남음 1시간 쉬면 2회복 불가.*/

	int piro_hour;
	int work_hour;
	int rest_hour;
	int maxPiro;
	int nowTime =0;
	int nowPiro = 0;
	int totalWork = 0;

	cin >> piro_hour >> work_hour >> rest_hour >> maxPiro;

	while (nowTime < 24)
	{
		if (piro_hour > maxPiro)
			break;
		if ((nowPiro+ piro_hour) <= maxPiro)
		{
			nowPiro += piro_hour;
			totalWork += work_hour;
			nowTime += 1;
		}
		else
		{
			while ((nowPiro + piro_hour) > maxPiro && nowTime < 24)
			{
				nowPiro -= rest_hour;
				nowTime += 1;

				if (nowPiro < 0)
					nowPiro = 0;
			}
		}
	}

	cout << totalWork;

}