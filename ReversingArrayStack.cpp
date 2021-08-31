#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

void Reverse(char *C,int n){  /*Time Complexity = O(n)
                                space Complexity = O(n) Extra memory allocated for stack creation.
                                one more way to reverse a String using a array by initializing two variables one at start and one at end
                                and swapping them this approach takes
                                Time Complexity = O(n)
                                Space Complexity = O(1)*/
    stack<char> S;                                        
                                
    int i;
    for(i = 0; i <= n-1; i++){
        S.push(C[i]);
    }
    for(i = 0; i<= n-1; i++){
        C[i] = S.top();
        S.pop();
    }
}



int main(){
    char C[51];
    cout << "Enter a string" << endl;
    gets(C);
    cout << "Reverse:- ";
    Reverse(C,strlen(C));
    cout << C << endl;
}