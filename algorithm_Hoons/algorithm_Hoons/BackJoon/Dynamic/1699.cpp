#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int input;
    int Dy[100001] = { 0 };

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        Dy[i] = i;
        for (int j = 1; j*j <= i; j++)
        {
            if (Dy[i] > Dy[i - j * j] + 1)
            {
                Dy[i] = Dy[i - j * j] + 1;
            }
        }
    }

    printf("%d", Dy[input]);
}