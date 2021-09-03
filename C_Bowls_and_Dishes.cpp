#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int k;
    cin >> n >> m;
    vector<pair<int, int>>cond(m);
    vector<pair<int,int>>person(k + 5);
    vector<int>dishes(n+1);
    for (int i = 0; i < m; i++)
    {
        cin >> cond[i].first >> cond[i].second;
        // cout << cond[i].first << " " << cond[i].second << endl;
    }
    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> person[i].first >> person[i].second;
        // cout << person[i].first << " " << person[i].second << endl;
    }
    int ans = 0;
    // cout << n << m  << k << endl;
    for(int i = 0; i < (1 << k); i++){
        for(int j = 0; j <= n; j++){
            dishes[j] = 0;
        }
        for(int j = 0; j < k; j++){
            int x = person[j].first;
            int y = person[j].second;
            //    
            if(i & (1 << j)){
                dishes[x]++;
            }
            else{
                dishes[y]++;
            }
        }
        int cnt = 0;
        for(int j = 0; j < m; j++){
            int c = cond[i].first;
            int d = cond[i].second;
            if(dishes[c] && dishes[d]){
                cnt++;
            }
            else{
                continue;
            }
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
}