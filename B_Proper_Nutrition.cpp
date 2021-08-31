#include <bits/stdc++.h>
using namespace std;


#define     F                   first
#define     S                   second
#define     pb                  push_back
#define     gap                 ' '
#define     fastIO              {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define     Inf                 1e18
#define     fix                 fixed<<setprecision(10)
#define     all(v)              v.begin(),v.end()
#define     For(i, a, b)        for(ll i = a; i <  b; ++i)
#define     Rof(i, a, b)        for(ll i = a; i >= b; --i)
#define     endl                "\n"
#define     yes                 cout<<"YES\n"
#define     no                  cout<<"NO\n"


typedef     long long               ll;
typedef     vector<ll>              vl;
typedef     pair<ll, ll>            pll;
typedef     map<ll, ll>             mll;
typedef     unordered_map<ll, ll>   umll;
typedef     multimap<ll, ll>        mmll;

const ll mod = 1e9+7;
const ll sz  = 2e5+5;


void solve() {

    ll n, a, b; cin>>n>>a>>b;
    for(ll i = 0; ; i ++) {
        if(a * i > n) {
            cout<<"NO"<<endl;
            return;
        }
        if((n - a * i) % b == 0) {
            yes;
            cout<< i <<gap << (n - a * i) / b <<endl;
            return;
        }
    }


}

int32_t main()
{
    fastIO
    ll T; T = 1;
    //cin>>T;
    while(T --) {
        solve();

    }


    return 0;

}
