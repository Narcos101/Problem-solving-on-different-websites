#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[4];
    cin >> s;
    cout << s << endl;
    char temp;
    temp = s[0];
    s[0] = s[1];
    s[1] = s[2];
    s[2] = temp;
    cout << s << endl;
}