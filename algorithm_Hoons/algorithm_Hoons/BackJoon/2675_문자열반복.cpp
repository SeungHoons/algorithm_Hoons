
#include<iostream>
#include<string>

int main()
{
    int testCase;
    string str;
    int re;
    cin >> testCase;

    while(testCase--)
    {
        cin >> re;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < re; j++)
            {
                cout << str[i];
            }
        }
        cout << endl;
        str.clear();
    }
    return 0;
}