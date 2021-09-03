#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <bitset>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
typedef long long ll;

//infの設定
#define INF32 2147483647
#define INF64 9223372036854775807
//repマクロ
#define rep(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))

int main()
{
    ll A, B2, ans;
    double B;
    cin >> A >> B;

    B2 = B * 100 + 0.01;
    
    ans = (A * B2) / 100;

    cout << ans << endl;
    return 0;
}