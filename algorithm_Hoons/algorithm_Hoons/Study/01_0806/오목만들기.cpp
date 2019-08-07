#define _CRT_SECURE_NO_WANRNINGS
#include <iostream>
#include <conio.h>

using namespace std;

#define WIDHT 19
#define HEIGHT 19
#define EMEPTY 0
#define BLACK 1
#define WHITE 2
int main()
{
	char input;
	int map[19][19];
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			map[i][j] = 0;
		}
	}

	int x = WIDHT / 2;
	int y = HEIGHT / 2;
	int TURN = BLACK;

	bool WB = false;
	bool HB = false;

	while (true)
	{
		input = _getch();
		system("cls");

		switch (input)
		{
		case 'w':
			if (y - 1 == -1)
				break;
			else
				y--;
			break;
		case 's':
			if (y + 1 == HEIGHT)
				break;
			else
				y++;
			break;
		case 'a':
			if (x - 1 == -1)
				break;
			else
				x--;
			break;
		case 'd':
			if (x + 1 == WIDHT)
				break;
			else
				x++;
			break;
		case 'z':
			if (map[y][x] == EMEPTY)
			{
				map[y][x] = TURN;

				WB = true;
				HB = true;
				for (int i = 0; i < 5; i++)
				{
					if ((x + i < WIDHT && WB == true) || (x - i > -1 && WB == true))
					{
						if ((map[y][x + i] == TURN) || (map[y][x - i] == TURN))
						{
							WB = true;
						}
						else 
						{
							WB = false;

						}
					}
					if ((y + i < HEIGHT && HB == true)|| (y - i < -1 && HB == true))
					{
						if (map[y + i][x] == TURN || map[y - i][x] == TURN)
						{
							HB = true;
						}
						else 
							HB = false;
					}
				}
				
				if (TURN == BLACK)
					TURN = WHITE;
				else
					TURN = BLACK;
				break;
			}

		default:
			break;
		}
		for (int i = 0; i < 19; i++)
		{
			for (int j = 0; j < 19; j++)
			{
				if ((j == x && i == y)&&(!WB && !HB))
					cout << "£À";
				else if (map[i][j] == BLACK)
					cout << "¡Û";
				else if (map[i][j] == WHITE)
					cout << "¡Ü";
				else if (j == 0 && i == 0)
					cout << "¦£";
				else if (j == 0 && i == HEIGHT - 1)
					cout << "¦¦";
				else if (j == WIDHT - 1 && i == 0)
					cout << "¦¤ ";
				else if (j == WIDHT - 1 && i == HEIGHT - 1)
					cout << "¦¥ ";
				else if (j == 0)
					cout << "¦§";
				else if (j == WIDHT - 1)
					cout << "¦© ";
				else if (i == 0)
					cout << "¦¨";
				else if (i == HEIGHT - 1)
					cout << "¦ª";
				else
					cout << "¦«";
			}
			cout << "\n";
		}
		cout << "\n\n\n";
		if (WB || HB)
		{
			cout << "====================================" << endl;
			if (TURN != BLACK)
				cout << "=========Èæµ¹ ½Â¸®ÀÔ´Ï´Ù.========";
			else
				cout << "=========Èòµ¹ ½Â¸®ÀÔ´Ï´Ù.========";
			cout << "\n====================================" << endl;
			return 0;
		}
		if (TURN == BLACK)
			cout << "Èæµ¹ Â÷·ÊÀÔ´Ï´Ù.";
		else
			cout << "Èòµ¹ Â÷·ÊÀÔ´Ï´Ù.";
	}


	return 0;
}