#include<bits/stdc++.h> 
using namespace std;
int T,i,sum,j;
string s;
int main()
{
	cin>>T;
	while(T--)
	{
		cin>>s;
		int f=0;
		for(i=0;i<8;i++){
			sum=0;
            // 0 1 2 3 4 5 6
			for(j=0;s[j];++j){
				sum+=(i>>s[j]-'A')&1?1:-1;
                cout << sum << " ";
				if(sum<0)break;
			}
			if(sum==0){
				puts("YES");
				f=1;
				break;
			}
		}
		if(!f)puts("NO");
	}
	return 0;
}