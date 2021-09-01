#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int min = INT_MAX;
        int min_index = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] < min){
                min = a[i];
                min_index = i+1;
            }
        }
        cout << min_index << endl;
    }
}