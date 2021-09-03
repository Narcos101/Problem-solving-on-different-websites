#include<bits/stdc++.h>
using namespace std;



int main(){
    int a,b,w;
    cin >> a >> b >> w;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 1; i <= 1000000; i++){
        if(a*i <= 1000*w && 1000*w <= b*i){
            mini = min(mini,i);
            maxi = max(maxi,i);
        }
    }
    if(mini == INT_MAX){
        cout << "UNSATISFIABLE" << endl;
    }
    else{
        cout << mini << " " << maxi << endl;        
    }
    return 0;
}