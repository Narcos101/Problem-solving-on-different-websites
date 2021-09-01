//Work hard, play hard :)
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
    int t;
    string s, m;
    cin >> t;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    while (t--)
    {
        int ans = 0;
        cin >> m;
        for (int i = 0; i < m.size(); i++)
        {
            if(isupper(m[i]))
            {
                ans = 0;
                char c = m[i];
                c = c + 32;
                ans += c - 97;
                m[i] = toupper(s[ans]);
            }
            else if(islower(m[i]))
            {
                ans = 0;
                char c = m[i];
                ans += c - 97;
                m[i] = s[ans];
            }
            else{
                if(m[i] == '_'){
                    m[i] = ' ';
                }
            }
        }
        cout << m << endl;
    }
}