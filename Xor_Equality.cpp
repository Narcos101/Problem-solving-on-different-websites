#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    ll m = (1000000007);
    while (t--)
    {
        ll n;
        cin >> n;
        ll y = n-1;
        ll x = 2;
        ll temp = 1;
        while(y > 0){
            if(y % 2 == 1){
                temp = (temp*x)%m;
            }
            x = (x*x)%m;
            y = y / 2;
        }
        cout << temp%m << endl;
    }
}