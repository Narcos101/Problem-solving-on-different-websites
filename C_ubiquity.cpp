#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int range = (1<<n)-1;
    range = (range/2);
    cout << range%10e9+7;
}