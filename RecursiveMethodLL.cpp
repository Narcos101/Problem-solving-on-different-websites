#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *end1 = NULL;
Node *head = NULL;
void Insert(int data){
    Node*temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    while(head == NULL){
        head = temp;
        end1 = temp;
        return;
    }
    end1 -> next = temp;
    end1 = temp;
}

void Reverse(Node*p){
    if(p->next == NULL){
        head = p;
        return;
    }
    Reverse(p->next);
    p -> next -> next = p;
    p -> next = NULL;
}

void Print(){
    Node *temp1 = head;
    while(temp1 != NULL){
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;
    }
   printf("\n"); 
}

int main(){
    int x,n,i;
    cout <<"Enter how many numbers you want to insert" << endl;
    cin >>n;
    for(i = 1; i<= n; i++){
        cout << "Enter the number you want to insert" << endl;
        cin >>x;
        Insert(x);
        cout << "The numbers in the list are:- " << endl;
        Print();
    }
    cout << "The numbers after reversing are:- " << endl;
    Reverse(head);
    Print();
}