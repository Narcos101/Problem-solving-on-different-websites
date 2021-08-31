// Problem: B. TMT Document
// Contest: Codeforces - Codeforces Round #715 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1509/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector <int>
#define ld long double
#define pii pair<int,int>
#define f(x,y,z) for(int x = y; x<z; x++)
#define pb push_back
#define mkp make_pair
#define ld long double 
#define rf(x,y,z) for(int x=y;x>=z;x--)
#define ps(x,y) fixed << setprecision(y) << x
#define PI 3.1415926535
#define mod 1000000007 
#define mods 998244353 
#define all(x) (x).begin(), (x).end()
#define endl "\n"
int lcm(int a,int b)
{
    return (a*b)/(__gcd(a,b));
}
int power(int a,int b,int p)
{
    int c=1;
    while(b)
    {
        if(b&1)
        c*=a;
        a*=a;
        b>>=1;
        c%=p;
        a%=p;
        b%=p;
    } 
    return c%p;
}
int inverse_mod(int n, int p)
{
    return power(n,p-2,p);
}
bool is_prime(int x){
    int c=0;
    if(x==2){
        return true;
    }
    if(x==1){
        return false;
    }
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            c=1;
            return false;
            
        }
    }
    return true;
}
 
void Print_array(vector<int>&v, bool b){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    if(b){
        cout<<endl;
    }
}


void solve()
{
//Have you wrote the psudo code in your copy?
//take numerical examples;
int n;
cin>>n;
string s;
cin>>s;

int ts=0, ft=0, fm=0;

for(int i=0; i<n; i++){
	if(s[i] == 'T') {ts++; ft++;}
	else{
		fm++;
		if(ts == 0){
			cout<<"NO"<<endl;
			return;
		}
		ts--;
	}
}
ts=0;
for(int i = n-1; i>=0; i--){
	if(s[i] == 'T') ts++;
	else{
		if(ts==0){
			cout<<"NO"<<endl;
			return;
		}
		ts--;
	}
}

if(ft != 2*fm){
	cout<<"NO"<<endl;
	return;
}

cout<<"YES"<<endl;
//pseudo code
}



//Don't get stick to a same method, think of other if it doesn't work;
//check all the cases properly;
int32_t main()
{
    IOS
    int t=1;
    cin>>t;
    int i=1;
    while(t--)
    solve();
    return 0;
}