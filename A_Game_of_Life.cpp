
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define forq(i , a , b) for (int i = (a); i <= (b); ++i)
#define qrof(i , b , a) for (int i = (a); i >= (b); --i)
#define forr(i , b) forq( i , 0 , b - 1 )
#define F first
#define S second
#define IF ->first
#define IS ->second
#define endl '\n'
#define OFF false
#define ON true
#define qqmemset(array , val) memset (array , val , sizeof(array))
#define ALLV(vect) vect.begin() , vect.end()
#define mid (st + en) / 2
#define mid1 (2 * st + en) / 3
#define mid2 (2 * en + st) / 3
#define lef 2 * Node
#define rig lef + 1
mt19937 rng( chrono::steady_clock::now().time_since_epoch().count() );
#define Ran(a, b) rng() % ( (b) - (a) + 1 ) + (a)

ll R = 7 + 1e9 , R1 = 19491001 , R2 = 236 , NUMTESTCASE ;
const ll NN = 10 + 1e6 , Inverse2 = 500000004 ;
const double pi = acos(-1.0) ;
int di [8] = {1 , 0 , -1 , 0  , 1 , -1 , 1  , -1 } , dj [8] = {0 , 1 , 0  , -1 , 1 , -1 , -1 , 1  } ;
int Dsu [NN] ;
int Root (int u) {
    return Dsu [u] == u ? u : Dsu [u] = Root(Dsu [u]) ;
}
void Merge (int u , int v) {
    u = Root(u) ;
    v = Root(v) ;
    Dsu [u] = v ;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL) ;
    for (cin >> NUMTESTCASE ; NUMTESTCASE ; NUMTESTCASE --) {
        int n , m ;
        string s ;
        cin >> n >> m >> s ;
        s = "0" + s + "0" ;
        m = min(n , m) ;
        forq (i , 1 , m) {
            string t = "0" ;
            forq (j , 1 , n) {
                if (s [j] == '0' && s [j + 1] == '1' && s [j - 1] == '0')
                    t += "1" ;
                else if (s [j] == '0' && s [j - 1] == '1' && s [j + 1] == '0')
                    t += "1" ;
                else t += s [j] ;
            }
            t += "0" ;
            s = t ;
        }
        forq (i , 1 , n)
            cout << s [i] ;
            cout << endl ;
    }
    return 0;
}
