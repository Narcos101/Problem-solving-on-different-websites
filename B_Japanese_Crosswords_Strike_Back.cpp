#include<bits/stdc++.h>
using namespace std;
int n,x,a,sum;
int main()
{
    cin>>n>>x;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum+n-1==x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}