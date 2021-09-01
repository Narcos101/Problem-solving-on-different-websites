#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        for(int i=0; i < n; i++){
            cin >> a[i];
        }
        long long int maxi = INT_MIN;
        long long int sum = 0;
        long long int sum1 = 0;
        for(int i = 0; i < n; i++){
            if(i == 0){
                sum =  a[0]+a[n-1]+a[n-2];
                sum =  max(a[0]+a[1]+a[2],sum);
            }
            else if(i == 1){ 
                sum = a[0] + a[n-1] + a[1];
                sum = max(a[1]+a[2]+a[3],sum);
            }
            else if(i == n-1){
                sum = a[n-2]+a[n-3]+a[n-1];
                sum = max(a[n-1]+a[0]+a[1],sum);
            }
            else if(i == n-2){
                sum = a[n-2]+a[n-1]+a[0];
                sum = max(a[n-2]+a[n-3]+a[n-4],sum);
            }
            else{
                sum = a[i-1]+a[i-2]+a[i];
                sum = max(a[i]+a[i+1]+a[i+2],sum);
            }

            if(sum > maxi){
                maxi = sum;
            }
        }
        cout << maxi << endl;
    }
}