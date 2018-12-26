
#include<iostream>
#include<list>
#include<queue>
#include <chrono> 
#include <ctime>
#include<vector>

using namespace std;

//int main()
//{
//    int input;
//    int leng;
//    list<int> num;
//    int count = 2;
//
//    scanf("%d %d", &input, &leng);
//    auto start = chrono::system_clock::now();
//    for (int i = 0; i < input; i++)
//    {
//
//        num.push_back(i + 1);
//    }
//
//    printf("<");
//    count = leng - 1;
//    auto numiter = num.begin();
//    while (!num.empty())
//    {
//        count--;
//        numiter++;
//
//        if (numiter == num.end())
//        {
//            numiter = num.begin();
//        }
//
//        if (count == 0)
//        {
//            if (num.size() != 1)
//                printf("%d, ", *numiter);
//            else
//                printf("%d", *numiter);
//            numiter = num.erase(numiter);
//            if (numiter == num.end())
//            {
//                numiter = num.begin();
//                //count = leng - 2;
//                //continue;
//            }
//            count = leng - 1;
//        }
//
//    }
//
//    printf(">");
//
//    cout << endl;
//    auto end = chrono::system_clock::now();
//
//    chrono::duration<double> j = end - start;
//    cout << j.count();
//
//}

//int main()
//{
//    int input, leng, temp;
//    queue<int> que;
//
//    scanf("%d %d", &input, &leng);
//    auto start = chrono::system_clock::now();
//
//    for (int i = 0; i < input; i++)
//    {
//        que.push(i + 1);
//    }
//    printf("<");
//    while (!que.empty())
//    {
//        for (int i = 1; i < leng; i++)
//        {
//            temp = que.front();
//            que.pop();
//            que.push(temp);
//        }
//        if (que.size() != 1)
//            printf("%d, ", que.front());
//        else
//            printf("%d", que.front());
//        que.pop();
//    }
//
//    printf(">");
//    cout << endl;
//    auto end = chrono::system_clock::now();
//
//    chrono::duration<double> j = end - start;
//    cout << j.count();
//}

