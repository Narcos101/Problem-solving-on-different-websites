#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    while (q--)
    {
        ll x; adv
        cin >> x;
        ll pos = lower_bound(arr, arr + n, x) - arr;
        if (pos < n && arr[pos] == x)
            cout << 0 << endl;
        else if (pos % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }

    return 0;
}


