//Work hard
//dont let other peoples success demotivate you
//Dont compromise You deserve Better!!!
//A problem a day keeps unemployment away
//if you won't someone else will!!!
//Do every work wholeheartedly(bus feels like a sauna)
#include <bits/stdc++.h>                                         // This will work only for g++ compiler.
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)            // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)           // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n)-1; i >= 0; --i)        // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)          // reverse 1 based
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    char temp = 'a';
    int flag = 0;
    while(q--){
        int t,a,b;
        cin >> t >> a >> b;
        if(t == 2){
            flag ^= 1;
        }
        else{
            if(flag){
                if(a >= n){
                    a -= n;
                }
                else{
                    a += n;
                }

                if(b >= n){
                    b -= n;
                }
                else{
                    b += n;
                }
            }
            temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }
    }
    if(flag){
        cout << s.substr(n,2*n) << s.substr(0,n) << endl;
    }
    else{
        cout << s << endl;
    }   
}    
