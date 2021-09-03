#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mini = INT_MAX;
    for(int i = 0; i < (1 << n-1); i++){
        int xored = 0;
        int result = 0;
        for(int j =0 ; j < n; j++){
            if(j < n){
                xored |= a[j];
            }
            if(i & (1 >> j)){
                result = result 
            }
        }   
    }
}