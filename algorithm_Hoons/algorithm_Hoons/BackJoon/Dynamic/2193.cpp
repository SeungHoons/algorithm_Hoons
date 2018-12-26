
#include<iostream>

using namespace std;

long result[91][2];
long long result2[91];


int solution(int _in)
{
    /*result[1][1] = 1;
    result[2][0] = 1;
    for (int i = 3; i <= _in; i++)
    {
        result[i][1] = result[i - 1][0];
        result[i][0] = result[i - 1][0] + result[i - 1][1];
    }*/
    //printf("%d", result[_in][0] + result[_in][1]);

    result2[1] = 1;
    for (int i = 2; i <= _in; i++)
    {
        result2[i] = result2[i - 1] + result2[i - 2];

    }
    printf("%lld", result2[_in]);

    return 1;
}

int main()
{
    int input;
    
    scanf("%d", &input);
    solution(input);

    return 0;
}