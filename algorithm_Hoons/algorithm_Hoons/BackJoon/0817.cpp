
#include<iostream>
#include<string>
using namespace std;

void push(int bae_[], int num)
{
    for (int i = 0; i < 10000; i++)
    {
        if (bae_[i] == 0)
        {
            bae_[i] = num;
            break;
        }
    }
}

void pop(int bae_[])
{

    if (bae_[0] != 0)
    {
        
        for (int i = 0; i < 100000; i++)
        {
            if (bae_[i] == 0)
            {
                printf("%d\n", bae_[i - 1]);
                bae_[i - 1] = 0;
                break;
            }
        }
    }
    else
        printf("-1\n");
}

int size(int bae_[])
{
    int result = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (bae_[i] == 0)
        {
            break;
        }
        result++;
    }
    return result;
}

void empty(int bae_[])
{
    if (bae_[0] != 0)
        printf("0\n");
    else
        printf("1\n");
}

void top(int bae_[])
{
    if (bae_[0] != 0)
        printf("%d\n",bae_[size(bae_) - 1]);
    else
        printf("1\n");
}

int main()
{
    int bae[10000] = { 0, };
    int testCase = 0;
    string str;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", str.c_str());
        if (!strcmp(str.c_str(), "push"))
        {
            int temp;
            scanf("%d", &temp);
            push(bae, temp);
        }
        else if (!strcmp(str.c_str(), "pop"))
        {
            pop(bae);
        }
        else if (!strcmp(str.c_str(), "size"))
        {
            printf("%d\n", size(bae));
        }
        else if (!strcmp(str.c_str(), "empty"))
        {
            empty(bae);
        }
        else if (!strcmp(str.c_str(), "top"))
        {
            top(bae);
        }
    }
}