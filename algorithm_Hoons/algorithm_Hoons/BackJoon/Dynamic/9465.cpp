#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;


int main()
{
    int testCase =0;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int N;
        scanf("%d", &N);

        long num[2][100000] = { 0 };
        long result[100000][3] = { 0 };

        
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < N; k++)
            {
                scanf("%d", &num[j][k]); 
            }
        }


        for (int j = 1; j <= N; j++)
        {

            long temp1 = (result[j - 1][0] >= result[j - 1][2]) ? result[j - 1][0] : result[j - 1][2];
            long temp2 = (result[j - 1][0] >= result[j - 1][1]) ? result[j - 1][0] : result[j - 1][1];



            result[j][0] = (temp1 >= temp2) ? temp1 : temp2;

            result[j][1] = temp1 + num[0][j - 1];
            result[j][2] = temp2 + num[1][j - 1];

        }
        
        long temp = result[N][0];
        for (int k = 1; k < 3; k++)
        {
            if (temp < result[N][k])
            {
                temp = result[N][k];
            }
        }

        printf("%ld\n", temp);

    }
    return 1;
}