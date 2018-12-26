#include"stdafx.h"

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
//
//int main()
//
//{
//    const int* p1 = new int(100);
//    printf("%d\n", *p1);
//    int* p2 = const_cast<int*>(p1);
//    *p2 = 200;
//    printf("%d\n", *p1);
//    //int *p3 = p1; ¾ÈµÊ
//    int *p3 = p2;
//    *p3 = 300;
//    printf("%d\n", *p1);
//
//    system("pause");
//}


void ShowString(char* str)
{
    cout << str << endl;
}

int main()
{
    const char* name = "Woori Ahn";
    ShowString(const_cast<char*>(name));
    //ShowString(name); 

    return 0;
}


//int main() {
//    string s;
//    cin >> s;
//    int n = s.size();
//    vector<int> a;
//    int temp;
//    for (int i = 0; i < n; i++) a.push_back(i);
//    sort(a.begin(), a.end(), [&s, &a](int u, int v) {
//        for (int i = 0; i < a.size(); i++)
//            printf("%d, ", a[i]);
//        printf("\n===============================\n");
//        printf("u : %s    ==   v: %s \n", s.c_str() + u, s.c_str() + v);
//        printf("%d==\n", strcmp(s.c_str() + u, s.c_str() + v));
//        
//        return strcmp(s.c_str() + u, s.c_str() + v) < 0;
//    });
//    for (auto &x : a) {
//        cout << s.substr(x) << '\n';
//    }
//    return 0;
//}

//
// int main() {
//    string s;
//    cin >> s;
//    int n = s.size();
//    vector<string> a;
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        a.push_back(s.substr(i));
//    }
//
//    sort(a.begin(), a.end());
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        printf("%s\n", a[i].c_str());
//    }
//}