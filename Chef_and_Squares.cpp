#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll ans = -1;
        bool possible = false;
        for(int i = 1; i <= sqrt(n); i++){
            if(n%i == 0 && i != n/i){
                int a = (n/i + i)/2;
                int b = (n/i - i)/2;
                if(b*b + n == a*a){
                    possible = true;
                    if(ans == -1){
                        ans = b;
                    }
                    else{
                        ans = min(ans,1ll*b);
                    }
                }
            }
        }
        if(possible){
            ans = ans * ans;
        }
        cout << ans << endl;
    }
}