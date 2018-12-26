
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

//push X : 정수 X를 스택에 넣는 연산이다.
//pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//    size : 스택에 들어있는 정수의 개수를 출력한다.
//    empty : 스택이 비어있으면 1, 아니면 0을 출력한다.
//    top : 스택의 가장 위에 있는 정수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.