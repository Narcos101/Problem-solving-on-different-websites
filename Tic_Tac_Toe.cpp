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
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int countx=0,counto=0,countblank=0;
        for(int i = 0; i < 3; i++){
            for(int j = 0;j < 3; j++){
                cin >> a[i][j];
                if(a[i][j] == 'X'){
                    countx ++;
                }
                else if(a[i][j] == 'O'){
                    counto ++;
                }
                else{
                    countblank ++;
                }
            }
        }
        // cout << countx << " " << counto << " " << countblank << endl;
        int countwinx=0,countwino=0;
        for(int i = 0; i < 3; i++){
            if(a[i][0] == a[i][1] && a[i][1] == a[i][2]){
                if(a[i][0] == 'X'){
                    countwinx ++;
                }
                else if(a[i][0] == 'O'){
                    countwino ++;
                }
            }
        }
        // cout << countwinx << " "<< countwino << endl;
        for(int i = 0; i < 3; i++){
            if(a[0][i] == a[1][i] && a[1][i] == a[2][i]){
                if (a[0][i] == 'X')
                {
                    countwinx++;
                }
                else if (a[0][i] == 'O')
                {
                    countwino++;
                }
            }
        }
        if(a[0][0] == a[1][1] && a[1][1] == a[2][2]){
            if (a[0][0] == 'X')
            {
                countwinx++;
            }
            else if (a[0][0] == 'O')
            {
                countwino++;
            }
        }
        if(a[0][2] == a[1][1] && a[1][1] == a[2][0]){
            if (a[0][2] == 'X')
            {
                countwinx++;
            }
            else if (a[0][2] == 'O')
            {
                countwino++;
            }
        }
        // cout << countwinx << " " << countwino << endl;
        if(countwinx > 0 && countwino > 0){
            cout << 3 << endl;
        }
        else if(countwinx >= 1 && countwino == 0){
            cout << 1 << endl;
        }
        else if(countwino >= 1 && countwinx == 0){
            cout << 1 << endl;
        }
        else if(countwino == 0 && countwinx == 0 && countblank == 0){
            cout << 1 << endl;
        }
        else if(countwinx == 0 && countwino == 0 && countblank != 0){
            cout << 2 << endl;
        }
        // else{
        //     cout << 2 << endl;
        // }
    }
}