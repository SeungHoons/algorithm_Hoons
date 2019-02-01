#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int A, B;
    int Aja;
    vector<int>Anum;
    vector<int>Bnum;
    long num10=0;


    cin >> A >> B;
    cin >> Aja;
    for (int i = 0; i < Aja; i++)
    {
        int temp;
        cin >> temp;
        Anum.push_back(temp);
    }

    int AnumSize = Anum.size();
    num10 = Anum[AnumSize - 1];
    for (int i = Anum.size()-2; i >=0 ; i--)
    {
        num10 += Anum[i] * pow(A, AnumSize-i-1);
    }


    while (num10>0)
    {
        Bnum.push_back(num10%B);
        num10 /= B;
    }

    for (int i = Bnum.size() - 1; i >= 0; i--)
    {
        printf("%d", Bnum[i]);
    }
    return 0;
}