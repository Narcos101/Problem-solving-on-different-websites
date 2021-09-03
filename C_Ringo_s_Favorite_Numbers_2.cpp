#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    ll a[n];
    map<ll,ll>mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i] % 200] ++;
    }
    ll ans = 0;
    for(auto &i: mp){
        ans += (i.second*(i.second-1))/2;
    }
    cout << ans << endl;
}