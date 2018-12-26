#include"stdafx.h"

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> input[i];
    }

    input[0] += input[1];
    input[2] += input[3];

    printf("%d", (stoi(input[0]) + stoi(input[2])) );
    
}