#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};
Node* head;

void Insert(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    Node *temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->next = NULL; 
}

void Print(){
    Node* temp = NULL;
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
        Insert(x);
        Print();
    }
}