/*
		⣠⣶⡾⠏⠉⠙⠳⢦⡀⠀⠀⠀⢠⠞⠉⠙⠲⡀⠀
		⠀⠀⠀⣴⠿⠏⠀⠀⠀⠀⠀⠀⢳⡀⠀⡏⠀⠀⠀⠀⠀⢷
		⠀⠀⢠⣟⣋⡀⢀⣀⣀⡀⠀⣀⡀⣧⠀⢸⠀⠀⠀⠀⠀ ⡇
		⠀⠀⢸⣯⡭⠁⠸⣛⣟⠆⡴⣻⡲⣿⠀⣸⠀⠀EZ⠀ ⡇
		⠀⠀⣟⣿⡭⠀⠀⠀⠀⠀⢱⠀⠀⣿⠀⢹⠀⠀⠀⠀⠀ ⡇
		⠀⠀⠙⢿⣯⠄⠀⠀⠀⢀⡀⠀⠀⡿⠀⠀⡇⠀⠀⠀⠀⡼
		⠀⠀⠀⠀⠹⣶⠆⠀⠀⠀⠀⠀⡴⠃⠀⠀⠘⠤⣄⣠⠞⠀
		⠀⠀⠀⠀⠀⢸⣷⡦⢤⡤⢤⣞⣁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⢀⣤⣴⣿⣏⠁⠀⠀⠸⣏⢯⣷⣖⣦⡀⠀⠀⠀⠀⠀⠀
		⢀⣾⣽⣿⣿⣿⣿⠛⢲⣶⣾⢉⡷⣿⣿⠵⣿⠀⠀⠀⠀⠀⠀
		⣼⣿⠍⠉⣿⡭⠉⠙⢺⣇⣼⡏⠀⠀⠀⣄⢸⠀⠀⠀⠀⠀⠀
		⣿⣿⣧⣀⣿………⣀⣰⣏⣘⣆⣀
		⠀⠀
		*/
#include <bits/stdc++.h>										 // This will work only for g++ compiler.
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)			 // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)			 // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n)-1; i >= 0; --i)		 // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)			 // reverse 1 based
//short hand for usual tokens
#define pb push_back
#define fi first
#define se second
// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end()  //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c, i) for (__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c, x) ((c).find(x) != (c).end())
//find version works for all containers. This is present in std namespace.
#define cpresent(c, x) (find(all(c), x) != (c).end())
// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())
using namespace std;
// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, m, i, j;
	cin >> n >> m;
	ll a[n], b[m];
	ll count = 0;
	ll cnt = 0;
	ll max = -1e18;
	ll min = 1e18;
	int x, y;
	for0(i, n)
	{
		cin >> a[i];
		if (a[i] < min)
		{
			min = a[i];
			x = i;
		}
	}
	for0(i, m)
	{
		cin >> b[i];
		if (b[i] > max)
		{
			max = b[i];
			y = i;
		}
	}
	for (i = 0; i < m; i++)
	{
		cout << x << " " << i << endl;
	}
	for (i = 0; i < n; i++)
	{
		if (x == i)
		{
			continue;
		}
		cout << i << " " << y << endl;
	}
	return 0;
}