#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;
void Insert(int data, int n){
    int i;
    Node *temp1 = new Node;
    temp1-> data = data;
    temp1 -> next = NULL;
    if(n == 1){
        temp1 -> next = head; 
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(i = 1; i<=n-1; i++){
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}    

void Print(){
    Node *ptr = head;
    while(ptr != NULL){
        cout << ptr -> data << endl;
        ptr = ptr -> next;
    }
}

int main(){
    Insert(3,1);
    Insert(4,2);
    Insert(5,3);
    Insert(6,2);
    Print();
}