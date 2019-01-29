#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


void two(int n)
{
    if (n == 0) return;
    if (n % 2 == 0)
    {
        two(-(n / 2));
        cout << '0';
    }
    else
    {
        if (n > 0)
            two(-(n / 2));
        else
            two(-(n - 1) / 2);
        cout << '1';
    }
}

int main()
{
    int input;
    cin >> input;
    if (input == 0) cout << '0';
    else two(input);
    cout << endl;
    return 0;
}