#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int _; cin >> _;
    while(_--){
        int n, a[n],pz[n]; cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            pz[a[i]] = i;
        }
        int m = n + 1;
        for(int i = n; i > 0; i--){
            if(pz[i] < m){
                for(int j = pz[i]; j < m; j++)cout << a[j] << " ";
                m = pz[i];
            }
        }
        cout << "\n";
    }
}