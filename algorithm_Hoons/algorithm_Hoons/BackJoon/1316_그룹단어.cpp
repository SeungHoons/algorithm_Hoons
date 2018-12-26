
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    bool abc[26] = { false };
    bool continue_;
    int testCase;
    int index;
    int count = 0;

    cin >> testCase;
    count = testCase;
    while (testCase--)
    {
        cin >> str;
        if (str.size() == 1)
        {
            continue;
        }
        for (int i = 1; i < str.size()+1; i++)
        {
            if (str[i - 1] != str[i])
            {
                index = 'z' - 'a' - ('z' - tolower(str[i - 1]));
                if (abc[index] == false)
                {
                    abc[index] = true;
                }
                else
                {
                    count--;
                    break;
                }
            }
        }

        for (int z = 0; z < 26; z++)
            abc[z] = false;
        str.clear();
    }
    cout <<count << endl;
    return 0;
}