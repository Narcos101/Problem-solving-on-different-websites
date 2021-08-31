#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        if (B == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << A << " " << A * B << " " << A * (B + 1) << '\n';
        }
    }
    return 0;
}
