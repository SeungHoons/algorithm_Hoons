#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    int a['z' - 'a' + 1] = { 0 };
    int maxindex = 0;
    int equel_=0;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        maxindex = 'z' - 'a' - ('z' - tolower( str[i]));
        a[maxindex]++;
    }
    maxindex = 0;
    for (int i = 1; i < 26; i++)
    {
        if (a[maxindex] == a[i])
        {
            equel_++;
        }
        if (a[maxindex] < a[i])
        {
            maxindex = i;
            equel_ = 0;
        }
    }
    if (equel_ > 0)
        cout << "?" << endl;
    else
    cout << (char)(maxindex+'A') << endl;
    return 0;
}