#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,z;cin>>x>>y>>z;
        if(x ==y && y == z)
        {
            cout<<"YES"<<endl;
            cout<< x<<" "<<x<<" "<<y<<endl;
        }
        else if (x == y && y > z )
        {
            cout<<"YES"<<endl;
            cout<< x<<" "<<z<<" "<<z<<endl;
        }
        else if (z == y && y > x )
        {
            cout<<"YES"<<endl;
            cout<< x<<" "<<x<<" "<<z<<endl;
        }
        else if (z == x && z> y)
        {
            cout<<"YES"<<endl;
            cout<< y<<" "<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
}