#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int input;
    int DecSequence[1001] = { 0 };
    int IncSeqeunce[1001] = { 0 };
    int num[1001];
    int Max = 0;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 1; i <= input; i++)
    {
        IncSeqeunce[i] = 1;
        DecSequence[input - i + 1] =1;
        for (int j = 1; j < i; j++)
        {
            if (num[i] > num[j])        //좌측부터 증가
            {
                if (IncSeqeunce[i] < IncSeqeunce[j] + 1)
                {
                    IncSeqeunce[i] = IncSeqeunce[j] + 1;
                }
            }

            if (num[input - i + 1] > num[input - j + 1])
            {
                if (DecSequence[input - i + 1] < DecSequence[input - j + 1] +1 )
                {
                    DecSequence[input - i + 1] = DecSequence[input - j + 1] + 1;
                }
            }

        }
    }

    for (int i = 1; i <= input; i++)
    {
        if (DecSequence[i] + IncSeqeunce[i] - 1 > Max)
            Max = DecSequence[i] + IncSeqeunce[i] - 1;
    }

    printf("%d", Max);
}

//int main()
//{
//    int input;
//    int temp1 = 0;
//    int temp2 = 0;
//    int max1 = 0;
//    int max2 = 0;
//
//    int num[1001] = { 0 };
//    int IncSequence[1001] = { 1,1 };      //오른쪽으로
//    int DecSequence[1001] = { 1,1 };      //왼쪽으로
//
//    scanf("%d", &input);
//
//    for (int i = 1; i <= input; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//
//    for (int i = 1; i <= input; i++)
//    {
//        IncSequence[i] = 1;
//        DecSequence[input - i + 1] = 1;
//        for (int j = 1; j < i; j++)
//        {
//            if (num[i] > num[j] && IncSequence[i] < IncSequence[j]+1 )
//            {
//                IncSequence[i] = IncSequence[j] + 1;
//                if (IncSequence[temp1] < IncSequence[i])
//                {
//                    temp1 = i;
//                }
//            }
//            if (num[input - i + 1] > num[input - j + 1] && DecSequence[input - i + 1] < DecSequence[input - j + 1] + 1)
//            {
//                DecSequence[input - i + 1] = DecSequence[input - j + 1] + 1;
//                if (DecSequence[temp2] < DecSequence[input - i + 1])
//                {
//                    temp2 = input - i + 1;
//                }
//            }
//        }
//    }
//    max1 = temp1;
//    for (int i = temp1; i <= input; i++)
//    {
//        for (int j = temp1; j < i; j++)
//        {
//            
//            if (num[i] < num[j])
//            {
//                IncSequence[i] = 1;
//                if (IncSequence[i] < IncSequence[j] + 1)
//                {
//                    IncSequence[i] = IncSequence[j] + 1;
//                    if (IncSequence[max1] < IncSequence[i])
//                    {
//                        max1 = i;
//                    }
//                }
//            }
//
//        }
//    }
//    
//    max2 = temp2;
//    for (int i = temp2; i >= 1; i--)
//    {
//        for (int j = temp2; j > i; j--)
//        {
//
//            if (num[i] < num[j] && DecSequence[i] < DecSequence[j] + 1)
//            {
//                DecSequence[i] = 1;
//                if (DecSequence[i] < DecSequence[j] + 1)
//                {
//                    DecSequence[i] = DecSequence[j] + 1;
//                    if (DecSequence[max2] < DecSequence[i])
//                    {
//                        max2 = i;
//                    }
//                }
//            }
//        }
//    }
//
//    IncSequence[max1] > DecSequence[max2] ? printf("%d", IncSequence[max1]) : printf("%d", DecSequence[max2]);
//
//    
//    return 0;
//}