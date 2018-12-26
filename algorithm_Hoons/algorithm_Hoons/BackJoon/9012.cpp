#include"stdafx.h"
#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    int testCase;
    string input;
    bool fuck = true;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        stack<char> a;
        cin >> input;
        fuck = true;

        if (input.size() % 2 != 0)
        {
            printf("NO\n");
            continue;
        }

        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '(')
                a.push('(');
            else if (input[i] == ')')
            {
                if (a.empty())
                {
                    fuck = false;
                    break;
                }
                a.pop();
            }
        }
        
        if (a.empty()&&fuck)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}