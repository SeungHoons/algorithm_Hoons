#include"stdafx.h"
#include<iostream>
#include<vector>

using namespace std;
unsigned long bits(unsigned long x, int k, int j);
void RadixExchangeSort(vector<int>& vec, int n, int index, int b = 31);

int main()
{
    int testCase;
    int temp;
    vector<int> input;

    cin >> testCase;
    input.reserve(testCase);     //�߰� �Ǵ� �������� �ð��� �����ϴ°��� �������� �̸� ������ ����� ���´�.
    
    for (int i = 0; i < testCase; i++)
    {
        cin >> temp;
        input.push_back(temp);
    }
    RadixExchangeSort(input, input.size(), 0);

    for (int i = 0; i < testCase; i++)
    {
        cout << input[i] << endl;
    }
    
}

unsigned long bits(unsigned long x, int k, int j)
{
    return (x >> k)& ~(~0 << j);
}

void RadixExchangeSort(vector<int>& vec, int n, int index, int b)
{
    unsigned long t;
    int i, j;
    if (n > 1 && b >= 0) 
    { // ��������
        i = 0; // i�� ����
        j = n - 1; // j�� ������
        while (true) { // Partition
            while (bits(vec[i+index], b, 1) == 0 && i < j) i++;
            while (bits(vec[j + index], b, 1) != 0 && i < j) j--;
            if (i >= j) break;
            t = vec[i]; vec[i] = vec[j]; vec[j] = t;
        }
        if (bits(vec[n - 1], b, 1) == 0) j++;
        RadixExchangeSort(vec, j,0, b - 1 );
        RadixExchangeSort(vec, n - j, j, b - 1);
    }
}