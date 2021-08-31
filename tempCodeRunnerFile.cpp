#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;
};
Node* head;

void Insert(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(head != NULL) temp->next = head;
    head = temp;
}

void Delete(int n){
    Node *temp = head;
    if(n == 1){
        head = temp->next;
        delete temp;
    }
    Node *temp1 = head;
    for(int i = 0; i < n-2; i ++){
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2; 

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
    Delete(2);
}