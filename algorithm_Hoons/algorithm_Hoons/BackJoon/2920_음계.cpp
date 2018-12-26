#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    int a;
    bool ab=true;
    bool bb=true;
    for (int i = 1; i < 9; i++)
    {
        cin >> a;
        
        if (a != i)
        {
            ab = false;
        }
        if (a != (9 - i))
        {
            bb = false;
        }
    }

    if (ab)
        cout << "ascending" << endl;
    else if (bb)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;

    return 0;
}