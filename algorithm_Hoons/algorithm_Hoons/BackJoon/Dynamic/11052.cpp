
#include<iostream>

using namespace std;

int card[1001] = { 0 };
int result[1001] = { 0 };
void solution(int _in);

int main()
{
    int input;

    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &card[i]);
    }
    solution(input);
}

void solution(int _in)
{
    for (int i = 1; i <= _in; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (result[i] < result[i-j]+card[j])
            {
                result[i] = result[i - j] + card[j];
            }
        }
    }
}

//int main()
//{
//    int numOfCard;
//
//    scanf("%d", &numOfCard);
//    for (int i = 1; i <= numOfCard; i++)
//    {
//        scanf("%d", &card[i]);
//    }
//    solution(numOfCard);
//
//    printf("%d", result[numOfCard]);
//}
//void solution(int _in)
//{
//    for (int i = 1; i <= _in; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            if (result[i] < result[i - j] + card[j])
//            {
//                result[i] = result[i - j] + card[j];
//            }
//        }
//    }
//}