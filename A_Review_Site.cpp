#include<bits/stdc++.h>
#define ll long long
#define f first
#define sc second
#define pb push_back
using namespace std;
ll a,b,c,d,i,e,f,g,n,m,k,l,ans,t;
int main() {
    cin>>t;
    while(t--) {
        cin>>n;
        ans=0;
        for(ll i=1;i<=n;i++) {
            cin>>a;
            if(a==1 || a==3) ans++;
        }
        cout<<ans<<"\n";
    }
}