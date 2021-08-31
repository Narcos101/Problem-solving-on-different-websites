    #include<bits/stdc++.h>
    //Pain of discipline is better than pain of regret
    #define pb push_back
    #define mp make_pair 
    #define fr first
    #define sc second
    #define clr(a) memset(a, 0, sizeof(a))
    #define sz(x) x.size()
    #define rep(n) for (ll i = 0; i < n; i++)
    #define repc(i, n) for (ll i = 0; i < n; i++)
    #define FOR(i, x, y) for (int i = x; i < y; i++)
    #define DEC(i, x, y) for (int i = x; i >= y; i--)
    #define all(v) v.begin(), v.end()
    #define min3(a, b, c) min(a, min(b, c))
    #define max3(a, b, c) max(a, max(b, c))
    #define alla(a, n) a, a + n
    
    using namespace std;
    
    // Some typedef's
    typedef long long ll;
    typedef unsigned long long ull;
    typedef pair<ll, ll> ii;
    typedef vector<ll> vi;
    typedef vector<ii> vii;
    
    // Some frequently used functions
    template <typename T>
    T modpow(T base, T exp, T modulus){  
        base %= modulus;  T result = 1;  
        while(exp > 0){    
            if(exp & 1) result = (result * base) % modulus;    
            base = (base * base) % modulus;    
            exp >>= 1;  
        }  
        return result;
    }
    ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
    
    // Some contants
    const int inf = 1e9 + 7;
    const double eps = 1e-6;
    const double pi = 1.00 * acos(-1.00);

    int main(){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int dp[n];
        for(int i = 0;i < n;i++){
            if(i){
                dp[i] = dp[i-1]+(s[i]-'a')+1;
            }
            else{
                dp[i] = (s[i]-'a')+1;
            }
            
        }
        while(m--){
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            if(a == 0){
                cout << dp[b] << endl;
            }
            else{
                cout << dp[b]-dp[a-1] << endl;
            }
            
        }
    }