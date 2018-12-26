#include "stdafx.h"

#include <iostream>
using namespace std;

int solution(int _h, int _r, int _g);
int main()
{
    int testCase;
    int height;
    int roomNum;
    int guest;

    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        cin >> height >> roomNum >> guest;
        cout<<solution(height, roomNum, guest)<<endl;
    }
}

int solution(int _h, int _r, int _g)
{
    int h = _g % _h;
    if (h == 0)
    {
        h = _h;
    }
    int r;
    if (float(_g % _h) < 0.001f)
    {
         r= (_g / _h);
    }
    else
    {
        r = (_g / _h)+1;
    }
    return (h * 100) + r;
}