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
        int n,m;
        cin >> n >> m;
        char a[n][m];
        int cntdot = 0,cntr = 0,cntw = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m;j++){
                cin >> a[i][j];
                if(a[i][j] == '.'){
                    cntdot++;
                } 
                else if(a[i][j] == 'R'){
                    cntr++;
                }
                else{
                    cntw++;
                }
            }
        }
        if(cntdot == 0 || (cntr == 0 && cntw == 0)){
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m;j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            return;
        }
        else{
            while(cntdot != 0){
                cout << cntdot << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        if(a[i][j] == 'R'){
                            if(a[i][j-1] == 'R' || a[i][j+1] == 'R' || a[i-1][j] == 'R' || a[i+1][j] == 'R'){
                                cout << "NO" << endl;
                                return;
                            }
                            if(a[i][j-1] && a[i][j-1] == '.'){
                                a[i][j-1] == 'W';
                                cntdot --;
                            }
                            if(a[i][j+1] && a[i][j+1] == '.'){
                                a[i][j+1] == 'W';
                                cntdot --;
                            }
                            if(a[i+1][j] &&  a[i+1][j] == '.'){
                                a[i+1][j] == 'W';
                                cntdot --;
                            }
                            if(a[i-1][j] && a[i-1][j] == '.'){
                                a[i-1][j] == 'W';
                                cntdot --;
                            }
                        }
                        else if(a[i][j] == 'W'){
                            if(a[i][j-1] == 'W' || a[i][j+1] == 'W' || a[i-1][j] == 'W' || a[i+1][j] == 'W'){
                                cout << "NO" << endl;
                                return;
                            }
                            if(a[i][j-1] && a[i][j-1] == '.'){
                                a[i][j-1] == 'R';
                                cntdot --;
                            }
                            if(a[i][j+1] && a[i][j+1] == '.'){
                                a[i][j+1] == 'R';
                                cntdot --;
                            }
                            if(a[i+1][j] && a[i+1][j] == '.'){
                                a[i+1][j] == 'R';
                                cntdot --;
                            }
                            if(a[i-1][j] && a[i-1][j] == '.'){
                                a[i-1][j] == 'R';
                                cntdot --;
                            }
                        }
                        else{
                            continue;
                        }
                    }
                }
            }
            // for(int i =0; i  <n; i++){
            //     for(int j = 0; j < m; j++){
            //         cout << a[i][j];
            //     }
            //     cout << endl;
            // }
            // .R....
            // ......
            // ......
            // .W....
        }
    }

    int main(){
        ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL) ;
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }