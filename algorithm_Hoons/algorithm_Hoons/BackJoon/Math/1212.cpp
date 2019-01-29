#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    vector<int> vTemp;

    cin >> input;

    int temp = input[0] - '0';
    if (temp == 1)
        vTemp.push_back(1);
    else if (temp == 0)
        vTemp.push_back(0);
    while (temp > 1)
    {
        vTemp.push_back(temp % 2);
        temp /= 2;
        if (temp == 1)
        {
            vTemp.push_back(temp);
        }
    }
    for (int i = vTemp.size()-1; i >= 0; i--)
    {
        printf("%d", vTemp[i]);
    }
    
    vTemp.clear();

    for (int i = 1; i < input.size(); i++)
    {
        int temp = input[i] - '0';
        if (temp == 1)
            vTemp.push_back(1);
        while (temp > 1)
        {
            vTemp.push_back(temp % 2);
            temp /= 2;
            if (temp == 1)
            {
                vTemp.push_back(temp);
            }
        }

        while (vTemp.size()<3)
        {
            vTemp.push_back(0);
        }
        for (int k = vTemp.size() - 1; k >= 0; k--)
        {
            printf("%d", vTemp[k]);
        }
        vTemp.clear();
    }



    
    return 0;
}