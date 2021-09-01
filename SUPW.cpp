#include<bits/stdc++.h>
using namespace std;
int arr[200001];


int getmin(int n){
    int res = INT_MAX;
    for(int i = 1; i<=n; i++){
        res = min(res,arr[i]);
    }
    return res;
}





int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = n-3; i>= 1;i--){
        arr[i] += min(arr[i+1],min(arr[i+2],arr[i+3]));
    }
    cout << getmin(min(n,3)) << endl;