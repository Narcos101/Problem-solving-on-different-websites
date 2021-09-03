#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin >> s;
    int n = s.size();
    int x;
    bool satisfy = true;
    for(int i = 0; i < n; i++){
        x = i + 1;
        if(x % 2 == 0){
            if(isupper(s[i])){
                continue;
            }
            else{
                break;
                satisfy = false;
            }
        }
        else{
            if(islower(s[i])){
                continue;
            }
            else{
                satisfy = false;
                break;
            }
        }
    }
    if(satisfy){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}