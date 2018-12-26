
#include<iostream>

using namespace std;

int main()
{
    int input;
    int num[10] = { 0, };
    int count = 0;
    cin >> input;

    if (input == 0)
        num[0]++;
    while (input >0)
    {
        num[input % 10]++;
        input /= 10;
    }
    


    for (int i = 0; i < 10; i++)
    {
        if(i != 9 && i != 6)
        count += num[i];
    }
    count += (((float)(num[9] + num[6]) / 2.0f) + 0.5);

    cout << count << endl;
    return 0;
}