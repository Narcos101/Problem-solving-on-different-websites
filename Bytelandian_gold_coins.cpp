#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
unordered_map<long long int, long long int> dp;
long long int change(long long int n){
    if(n < 12){
        return n;
    }
    else if(dp[n] != 0) return dp[n];
    
    else{
        dp[n] =  max(n, change(n/2) + change(n/3) + change(n/4));
        return dp[n];
    }
}
 
int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	long long int N;
	while(cin>>N){
	    cout<<change(N)<<nl;
	}
	
	
	return 0;
}
 

 