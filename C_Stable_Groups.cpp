# include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

# define pb push_back 
# define mp make_pair
# define all(x) x.begin(),x.end() 
# define ts to_string
# define ti(s) s-='0'

const ll mx = LLONG_MAX;
const ll mdx = 1000000007;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
    
#define clock(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %lld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )

int main(){
	// clock("Finished in "){
		ll s,k,x;
		cin>>s>>k>>x;
		vector<ll> a(s);
		for(int i=0; i<s; i++) cin>>a[i];
		sort(all(a));
		vector<ll> need;
		for(int i=0; i<s-1; i++){
			if(a[i+1]-a[i]>x){
				need.pb(((a[i+1]-a[i]-1)/x));
			}
		}
		ll sum=0;
		ll ans=0;
		sort(all(need));
		for(int i=0; i<need.size(); i++){
			if(sum+need[i]<=k){
            sum+=need[i];
			ans++;
          }
			else
				break;
		}
		cout<<need.size()-ans+1<<endl;
}
