#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        int x;
        int y;
        int lang;
        int count = 0;
        int minus = 1;
        bool twice = false;
        cin >> x >> y;
        lang = y - x;

        while (lang>0)
        {
            lang -= minus;
            if (twice == true)
            {
                minus++;
                twice = false;
            }
            else
            {
                twice = true;
            }
            
            count++;
        }
        cout << count << endl;
    }
    return 0;

}