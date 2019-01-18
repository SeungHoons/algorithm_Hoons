#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int B;
    string num;
    long long ans =0 ;
    
    cin >> num >> B;

    for (int i = 0; i<num.size(); i++)
    {
        if ('0' <= num[i] && num[i] <= '9')
        {
            ans = ans * B + (num[i] - '0');
        }
        else
        {
            ans = ans * B + (num[i] - 'A' + 10);
        }
    }

    printf("%lld", ans);
    return 0;
}