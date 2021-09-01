#include<bits/stdc++.h>
using namespace std;

void prefixsum(int arr[],int n){
    for(int i = 1; i < n; i++){
        arr[i] = arr[i-1]+arr[i];
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    int m;
    cin >> m;
    while(m--){
        cin >> a >> b;
        for(int i = a; i < b; i++){}
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    prefixsum(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}