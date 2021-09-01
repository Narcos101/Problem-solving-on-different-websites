#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (x == -1)
        return y;
    return gcd(y % x, x);
}
void GCD_Helper(vector<int> v, int n)
{
    int ans = v[0];
    for (int i = 1; i < n; i++)
    {
        ans = gcd(v[i], ans)
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        v[i] = val;
    }
    cout << GCD_Helper(v, n) << endl;
}