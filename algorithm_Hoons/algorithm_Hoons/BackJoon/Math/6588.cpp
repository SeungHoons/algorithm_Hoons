#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int input;

    const int MAX = 1000001;
    bool Era[MAX] = { false };
    int min, max;

    Era[0] = true;
    Era[1] = true;
    for (int i = 2; i <= MAX; i++)
    {
        if (Era[i] == false)
        {
            for (int j = i + i; j < MAX; j += i)
            {
                Era[j] = true;
            }
        }
    }

    while (true)
    {
        cin >> input;

        if (input == 0)
            break;

        for (int i = 2; i < input; i++)
        {
            for (int j = i; j <= i; j++)
            {
                if (Era[input - i] == true)
                {
                    break;
                }

                cout << i << ' ' << input-i << '\n';
            }
        }
    }
    return 0;
}