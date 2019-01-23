#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int sSize;

    cin >> input;

    sSize = input.size() %3;

    if (sSize == 1 && input[0] - '0' > 0)
        printf("%d", input[0]-'0');
    else if (sSize == 2)
        printf("%d", (input[0] - '0') * 2 + (input[1] - '0'));
    else if (input.size() == 1 && input[0] - '0' == 0)
        printf("%d", 0);

    for (int i = sSize; i < input.size(); i+=3)
    {
        printf("%d", (input[i + 2] - '0') + ((input[i + 1] - '0') * 2) + ((input[i] - '0') * 4));
    }
    return 0;
}