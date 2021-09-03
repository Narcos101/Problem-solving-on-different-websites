#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n ;i++){
        cin >> a[n] >> b[n];
    }
    int flag = 0;
    for(int i = 2; i < n; i++){
        if(a[i-2] == b[i-2] && a[i - 1] == b[i-1] && a[i] == b[i]){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}