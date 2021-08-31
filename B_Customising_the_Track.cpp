
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define  fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],sum=0;;
        for(ll i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        ll cunt=(sum/n);
        ll cunt1=sum-(cunt*n);
        cout<<cunt1*(n-cunt1)<<endl;
    }
}
/*

*/