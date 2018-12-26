
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int result;

    cin >> str;

    result = str.size();
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == 'j')
        {
            if (str[i-1] == 'l' ||str[i-1]=='n')
                result--;
        }
        if (str[i - 1] == 'c')
        {
            if (str[i] == '=' || str[i] == '-')
                result--;
        }
        if (str[i - 1] == 'd')
        {
            if (str[i] == '-' || (str[i] == 'z' && str[i+1]=='='))
                result--;
        }
        if (str[i] == '=')
        {
            if (str[i-1] == 's' || str[i-1] == 'z')
                result--;
        }
    }
    cout << result << endl;
}