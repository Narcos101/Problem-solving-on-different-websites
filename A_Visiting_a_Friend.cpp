#include <bits/stdc++.h>
using namespace std;
 
int n,m,now = 0;
 
int main(){
    #ifdef LOCAL_DEFINE
        freopen("rush_in.txt", "r", stdin);
    #endif
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;i++){
        int x,y;
        cin >> x >> y;
        if (now >= x) now = max(now,y);
    }
    if ( now >=m){
        cout <<"YES"<<endl;
    }else{
    cout <<"NO"<<endl;}
    return 0;
}