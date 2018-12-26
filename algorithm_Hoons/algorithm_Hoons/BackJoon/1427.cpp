#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int minIndex =0;
    cin >> str;
    for (int i=0; i < str.size(); i++)
    {
        minIndex = 0;
        for (int j = 1; j < str.size() - i; j++)
        {
            if (str[minIndex] > str[j])
            {
                minIndex = j;
            }
        }
        int tempI = str.size() - 1 - i;
        if (tempI == 0)
            break;
        char tempC = str[tempI];
        str[tempI] = str[minIndex];
        str[minIndex] = tempC;
    }
    cout << str;
}