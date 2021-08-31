#include<bits/stdc++.h>
using namespace std;

typedef long long               ll;
typedef pair<int, int>          PII;
typedef vector<int>             VI;
typedef vector<ll>              VLL;
typedef vector<PII>             VII;
typedef vector<VI>              VVI;

#define nl "\n"
#define f0(i,n)             for(int i=0; i<n; ++i)
#define f1(i,x,n)           for(int i=x; i<n; ++i)
#define rf(i,x,y)           for(int i=x; i>=y; --i)
#define all(v)              v.begin(),v.end()
#define rall(v)             v.rbegin(),v.rend()
#define sz(v)               (int)((v).size())
#define pb                  push_back
#define fi                  first
#define se                  second
#define mp                  make_pair
#define scan(a)             for(auto &x:a) cin>>x
#define scan1(a)            for(auto &v:a) scan(v)
#define show(a)             for(auto &x:a) cout<<x<<' '; cout<<nl
#define show1(a)            for(auto &v:a) {show(v);}


// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
//                                START
// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #



void solve() {
    int n; cin >> n;
    int a, b; cin >> a >> b;
    string s; cin >> s;
    int ans = 0;

    if (b >= 0) ans = n * (a + b);
    else {
        ans += a * n;
        int cnt = 1;
        char prev = s[0];
        f1(i, 1, n) {
            if (s[i] != prev) {
                prev = s[i];
                cnt++;
            }
        }
        ans += b * (cnt / 2 + 1);
    }

    cout << ans << nl;
}





// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
//                                 END
// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int t = 1;  cin >> t;
    while (t--) solve();
}