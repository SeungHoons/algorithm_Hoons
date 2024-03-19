#include <iostream>
#include <string>   
#include <cstring>

using namespace std;


int counti = 0;

int recursion(const char* s, int l, int r) {
    counti = counti + 1 ;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int testCase;

    cin >> testCase;
    string str;
    for (int i = 0; i < testCase; i++)
    {
        cin >> str;
        cout << isPalindrome(str.c_str()) << " " << counti << "\n";
        counti = 0;
    }
}