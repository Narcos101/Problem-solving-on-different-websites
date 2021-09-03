#include <bits/stdc++.h>
using namespace std;
#define rep(i, n, m) for (int i = n; i < (int)(m); i++)

int main()
{
    long long N, K;
    cin >> N >> K;
    long long A = N % K;
    long long B = K - A;
    cout << min(A, B) << endl;
}