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
    //Repeat the problem statement,Example(Random testcases),Approach,Code,Testcases,Optimize,Upsolving,30-45minutes
    // 6 probs a NE APPROACH
    // participate in every contest
    // int overflow, array bounds special cases (n=1?) 
    // if u wont someone else will..
    // do smth instead of nothing and stay organized 
    // WRITE STUFF DOWN DON'T GET STUCK ON O

    // Some contants
    const int inf = 1e9 + 7;
    const double eps = 1e-6;
    const double pi = 1.00 * acos(-1.00);



        vector<vector<int>> Generate(vector<int> v){
            int size = v.size();
            int subsetsize = (1 << size);
            vector<vector<int>>allSubsets;
            for(int subsetmask = 0; subsetmask < subsetsize; subsetmask++){
                vector<int>v1;
                for(int i = 0; i < size; i++){
                    if((subsetmask & (1 << i)) != 0){
                        v1.push_back(v[i]);
                    }
                }
                allSubsets.push_back(v1);
            }
            return allSubsets;
        }

        int main(){
            ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL) ;
            vector<int>v;
            v.push_back(3);
            v.push_back(2);
            v.push_back(4);
            vector<vector<int>> getSubsets = Generate(v);
            for(int i = 0; i < getSubsets.size(); i++){
                for(int j = 0 ; j < getSubsets[i].size(); j++){
                    cout << getSubsets[i][j] << " ";
                }
                cout << endl;
            }
        }   