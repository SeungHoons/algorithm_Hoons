#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCase;
    string str;
    int sum = 0;
    int result = 0;

    cin >> testCase;

    
    for (int i = 0; i < testCase; i++)
    {
        cin >> str;
        
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == 'O')
            {
                sum++;
            }
            else
            {
                sum = 0;
            }
            result += sum;
        }
        cout << result << endl;
        str.clear();
        sum = 0;
        result = 0;
    }


    return 0;

}