#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
    const int MAX = 1000001;
    bool Era[MAX] = { false };
    int min, max;

    Era[0] = true;
    Era[1] = true;
    for (int i = 2; i <= MAX; i++)
    {
        if (Era[i] == false)
        {
            for (int j = i + i; j < MAX; j += i)
            {
                Era[j] = true;
            }
        }
    }

    cin >> min >> max;

    for (int i = min; i <= max; i++)
    {
        if(Era[i]==false)
        cout << i<<'\n';
    }

    return 0;
}



//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int min, max;
//    vector<int> vInt;
//
//    scanf("%d %d", &min, &max);
//
//    vInt.reserve(max - min);
//    for (int i = min; i <= max; i++)
//    {
//        vInt.push_back(i);
//    }
//
//    vInt[0] = vInt[0] == 1 ? 0 : vInt[0];
//
//    int index=0;
//    while (true)
//    {
//        if (index == vInt.size() - 1)
//            break;
//
//        if (vInt[index] != 0)
//        {
//            for (int i = 1; i < vInt.size(); i++)
//            {
//                if (vInt[i] != vInt[index] && vInt[i] !=0)
//                {
//                    if (vInt[i] % vInt[index] == 0)
//                    {
//                        vInt[i] = 0;
//                    }
//                }
//            }
//        }
//        index++;
//    }
//
//    for (int i = 0; i < vInt.size(); i++)
//    {
//        if (vInt[i] != 0) {
//            printf("%d ", vInt[i]);
//        }
//    }
//
//    return 0;
//}