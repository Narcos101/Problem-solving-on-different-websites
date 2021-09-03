#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int k, n;
int a[N];
int main()
{
    cin >> k >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int maxi = k - a[n] + a[1];
    for (int i = 2; i <= n; i++)
    {
        maxi = max(maxi, a[i] - a[i - 1]);
    }
    cout << k - maxi << endl;
}