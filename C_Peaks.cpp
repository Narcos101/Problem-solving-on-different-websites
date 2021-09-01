#include <bits/stdc++.h>

typedef int64_t ll;
using namespace std;
const int INF = 1000000007;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("out.txt", "w", stdout);
// #endif
    ll n, m;
    cin >> n >> m;
    ll h[n], v[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
        v[i] = 1;
    }
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        if (h[a] > h[b])
        {
            v[b] = 0;
        }
        else if (h[a] < h[b])
        {
            v[a] = 0;
        }
        else
        {
            v[a] = 0;
            v[b] = 0;
        }
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
}
