#include <bits/stdc++.h>
using namespace std;

const int Maxn = 1000005;

char tmp[Maxn];
int n;
string s;
bool ch = false;

void Read(string &s)
{
    scanf("%s", tmp);
    s = tmp;
}

int main()
{
    scanf("%d", &n);
    Read(s);
    int q;
    scanf("%d", &q);
    while (q--)
    {
        int typ, a, b;
        scanf("%d %d %d", &typ, &a, &b);
        a--;
        b--;
        if (typ == 1)
        {
            if (ch)
            {
                if (a < n)
                    a += n;
                else
                    a -= n;
                if (b < n)
                    b += n;
                else
                    b -= n;
            }
            swap(s[a], s[b]);
        }
        else
            ch ^= true;
    }
    if (ch)
        printf("%s%s\n", s.substr(n).c_str(), s.substr(0, n).c_str());
    else
        printf("%s\n", s.c_str());
    return 0;
}