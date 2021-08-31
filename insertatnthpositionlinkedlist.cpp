#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};
Node* head;

void Print(){
    Node* temp = NULL;
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// 1 2 3
// 0 1 2

void Insert(int x, int n){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(n == 1){
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp1 = head;
    for(int i = 1; i <n-1; i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

int main(){
    head = NULL;
    cout << "Enter how many numbers you want in the list" << endl;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Enter the number you want to insert" << endl;
        int x;
        cin >> x;
        cout << "Enter the position at where you want to insert" << endl;
        int pos;
        cin >> pos;
        Insert(x,pos);
        Print();
    }
}