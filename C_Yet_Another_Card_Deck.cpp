#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
    int n,q;
    cin >> n >> q;
    vector<int>v;
    for(int i = 0; i < n;i++){
        int temp;
        cin >> temp;
        v.pb(temp);
    }
    while(q--){
        int a;
        cin >> a;
        int pos = find(v.begin(),v.end(),a)-v.begin();
        cout << pos+1 << " ";
        rotate(v.begin(),v.begin()+pos,v.begin()+pos+1);
    }

}