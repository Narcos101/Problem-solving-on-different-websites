    #include<bits/stdc++.h>

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
    //Repeat,Example,Approach,Code,Testcases,Optimize
    // int overflow, array bounds special cases (n=1?) 
    // do smth instead of nothing and stay organized 
    // WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH

    // Some contants
    const int inf = 1e9 + 7;
    const double eps = 1e-6;
    const double pi = 1.00 * acos(-1.00);



    void solve(){
        // k lines already were written
        // they spended n+m minutes on the problem
        // every minute there is a change in the file
        // sequnce of operations in order.. if (a[i] == 0 then adds a line or if a[i] > 0 changes a number)
        int n,m,k;
        cin >> k >> n >> m;
        vector<int>v,v1,v2;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        for(int i = 0; i < m; i++){
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        int d = 0;
        int i = 0;
        int j = 0;
        while(d != (n+m)){
            if(v[i] == 0){
                v2.push_back(v[i]);
                k++;
                i++;
            }
            else if(v1[j] == 0){
                v2.push_back(v1[j]);
                k++;
                j++;
            }
            else if(v[i] <= k){
                v2.push_back(v[i]);
                i++;
            }
            else if(v1[j] <= k){
                v2.push_back(v1[j]);
                j++;
            }
            else{
                cout << -1 << endl;
                return;
            }
            d++;
        }
        cout << endl;
    }

    int main(){
        ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL) ;
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }