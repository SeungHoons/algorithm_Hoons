#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
    int input;
    long Dy[31] = { 0 };

    scanf("%d", &input);

    Dy[0] = 1;
    for (int i = 2; i <= input; i++)
    {
        Dy[i] = Dy[i - 2] * 3;
        for (int j = i - 4; j >= 0; j -= 2)
        {
            Dy[i] += Dy[j] * 2;
        }
    }
    printf("%ld", Dy[input]);
    return 0;
}