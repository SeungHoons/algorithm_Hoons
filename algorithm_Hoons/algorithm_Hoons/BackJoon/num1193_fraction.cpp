#include"stdafx.h"
#include<math.h>


int main()
{
    bool    up = true;
    int     input = 0;
    int     bunja = 1;
    int     bunmo = 1;
    cin >> input;

    while ((input--)-1)
    {
        if (up)
        {
            if (bunja == 1)
            {
                bunmo += 1;
                up = false;
                continue;
            }
            bunja--;
            bunmo++;
        }
        else
        {
            if (bunmo == 1)
            {
                bunja += 1;
                up = true;
                continue;
            }
            bunja++;
            bunmo--;
        }
    }
    cout << bunja << "/" << bunmo;

    return 0;
}