#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
	unordered_map<ll, ll> mp;
	mp[0] = 0;
	for (long long int i = 1; i <= 10001; i++)
	{
		mp[i * i * i]++;
	}

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin >> t;
	while (t--) {
		ll x;
		cin >> x;

		ll c = cbrt(x);

		int f = 0;

		for (ll i = 1; i <= 10000; i++)
		{
			if (f)
				break;

			ll z = i * i * i;
			if (z >= x)
				break;

			if (mp.find(x - z) != mp.end())
			{
				f = 1;
			}
		}


		if (!f) {
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}

	}

	return 0;
}