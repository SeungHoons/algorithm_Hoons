

#include<iostream>

void star(int i);
int main()
{
    int input = 0;
    int small = 0;
    int state = 1;//state 1/2/5
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            if (j > input - i)
            {
                star(state);
                state += 2;
                cout << endl;
                break;
            }
            cout << " ";
        }
    }

    cin >> input;
    return 0;
}

void star(int i)
{
    if (i == 1)
    {
        cout << "*";
    }
    else if (i==3)
    {
        cout << "* *";
    }
    else
    {
        cout << "*****";
    }
}