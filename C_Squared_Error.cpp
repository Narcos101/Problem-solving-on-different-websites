#include <bits/stdc++.h>
using namespace std;
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ch(a) (int(a - 'a') + 1)
#define mm(a) memset(a, 0, sizeof(a))
#define rep(i, a, b) for (int i = (a); i <= (b); i++)
#define inf 0x7FFFFFFF
typedef long long ll;
const int Maxx = 3 * 1e5 + 10;
int a[Maxx];
ll vis[455];
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int>v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v[a[i] + 200] += 1;
    }
    int ans = 0;
    for(int i = 0; i<= 400; i++){
        for(int j =i+1; j <= 400; j++){
            ans += v[i]*v[j]*(j-i)*(j-i);
        }
    }
    cout << ans << endl;


}
