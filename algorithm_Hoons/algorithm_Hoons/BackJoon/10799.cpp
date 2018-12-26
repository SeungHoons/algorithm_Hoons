#include"stdafx.h"
#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

int main()
{
    string input;
    vector<int> temp;
    bool razer = false;
    int result=0;

    //scanf("%s", input);
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(')
        {
            if (input[i + 1] != ')')
            {
                temp.push_back(0);
            }
            razer = false;

        }
        else if (input[i] == ')')
        {
            if (razer == false)
            {
                razer = true;
                for (int j = 0; j < temp.size(); j++)
                {
                    temp[j]++;
                }
            }
            else
            {
                result += temp[temp.size()-1]+1;
                temp.pop_back();
            }
        }
    }

    printf("%d", result);

}