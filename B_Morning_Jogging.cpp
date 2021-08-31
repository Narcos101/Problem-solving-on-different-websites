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
        // given some numbers in form of a 2d array where the particular row stands for a checkpoint and given the lengths to proceed to
        // the next checkpoint we have to find the minimum length so that each of the runners experience minimum tiredness.
        // we have to find n minimum numbers to pair with big numbers
        // 4 X6 X7
        // X1 X3 X3
        // X2 X5 X8
        // 8 8 X9
        //,......
        // first approach- find the minimum numbers and given them a row each and find the tiredness.
        vector<vector<int>>v;
        v.assign(n,vector<int>());
        vector<int>v1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int temp;
                cin >> temp;
                v[i].push_back(temp);
                v1.push_back(temp);
            }
        }
        // 1 2 3 4 5 6
        // 
        sort(all(v1));
        for(int k = 0; k < m; k++){
            // k = 0;
            for(int i = 0; i< n; i++){
                for(int j = 0; j < m; j++){
                    if(v[i][j] == v1[k]){
                        // 0 0 == 2
                        // 
                        swap(v[i][j],v[i][k]);
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
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