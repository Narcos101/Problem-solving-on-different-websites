#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, ans = 0.0;
    cin >> A >> B;

    ans = B / A * 100;

    cout << std::fixed << std::setprecision(10) << 100 - ans << endl;
}
