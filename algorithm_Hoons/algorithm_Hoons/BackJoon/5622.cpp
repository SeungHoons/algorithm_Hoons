#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int secon = 2;
    string str;
    int tempInt;
    int result = 0;

    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        tempInt = str[i] - 'A';

        if (tempInt >= 'P' - 'A' && tempInt <='S'-'A')
        {
            result += 8;
            continue;
        }
        else if (tempInt >= 'T' - 'A' && tempInt <= 'V' - 'A')
        {
            result += 9;
            continue;
        }
        else if (tempInt >= 'W' - 'A' && tempInt <= 'Z' - 'A')
        {
            result += 10;
            continue;
        }
        tempInt /= 3;
        result += (tempInt + 3);

    }
    cout << result << endl;
}