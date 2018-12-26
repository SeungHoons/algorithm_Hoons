
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string h;
    getline(cin, h);
    int a;
    int remainder;
    char printText;

    for (int i = 0; i < h.size(); i++)
    {
        a = h[i];
        if (a >= 65 && a <= 90)
        {
            if ((a + 13) > 90)
            {
                remainder = a + 13 - 91;
                printText = 65 + remainder;
                printf("%c", printText);
            }
            else
            {
                printText = a + 13;
                printf("%c", printText);
            }
            
        }
        else if (a >= 97 && a <= 122)
        {
            if ((a + 13) > 122)
            {
                remainder = a + 13 - 123;
                printText = 97 + remainder;
                printf("%c", printText);
            }
            else
            {
                printText = a + 13;
                printf("%c", printText);
            }
        }
        else
        {
            printf("%c", h[i]);
        }
    }
}