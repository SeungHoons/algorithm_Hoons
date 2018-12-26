
#include<iostream>

#include<string>

using namespace std;
int stack[10000] = { 0 };

void push(int _in)
{
    for (int i = 0; i< 10000; i++)
    {
        if (stack[i] == 0)
        {
            stack[i] = _in;
            return;
        }
    }
}

void pop()
{
    if (stack[0] == 0)
    {
        printf("-1\n");
        return;

    }
    for (int i = 0; i < 10000; i++)
    {
        if (stack[i] == 0)
        {
            printf("%d\n", stack[i - 1]);
            stack[i - 1] = 0;
            return;
        }
    }
}

void size()
{
    int count = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (stack[i] == 0)
        {
            printf("%d\n", count);
            return;
        }
        count++;
    }
}

void empty()
{
    if (stack[0] == 0)
    {
        printf("1\n");
        return;
    }
    else
    {
        printf("0\n");
        return;
    }

}

void top()
{
    if (stack[0] == 0)
    {
        printf("-1\n");
        return;

    }
    for (int i = 0; i < 10000; i++)
    {
        if (stack[i] == 0)
        {
            printf("%d\n", stack[i - 1]);
            return;
        }
    }
}

int main()
{
    int testCase;
    string input;
    int temp;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        //scanf("%s" ,&input);
        cin >> input;

        if (!strcmp(input.c_str() , "push"))
        {
            scanf("%d", &temp);
            push(temp);
        }
        else if (!strcmp(input.c_str() , "pop"))
        {
            pop();
        }
        else if (!strcmp(input.c_str() , "size"))
        {
            size();
        }
        else if (!strcmp(input.c_str(), "empty"))
        {
            empty();
        }
        else if (!strcmp(input.c_str(), "top"))
        {
            top();
        }
    }
}

//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//    size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//    empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//    top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.