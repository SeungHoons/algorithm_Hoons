#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);


	//A �Ƿε�
	//B �Ƿε��� ��ó����
	//C �޽�(�Ƿε�-)
	//M �Ƿε� �ִ�ġ
	//24�ð� ����

	//5 3 2 10  >> 24

	/*5 * 2 = 3 * 2;
	22�ð�;
	�޽� 5�ð� -> 17;
	7�ð� ���� 6��ó��;
	3 * 7 = 21;
	3�ð� ���µ� 2�ð� +
		18 + 6;
	24; 1�ð� ���� 1�ð� ���� 2ȸ�� �Ұ�.*/

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