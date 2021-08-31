#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
 Node *front = NULL;
 Node *rear = NULL;

void Enqueue(int x){
    Node *temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if(front == NULL &&  rear == NULL){
        front = rear = temp;
    }
    rear -> next = temp;
    rear = temp; 
 }

void Dequeue(){
    Node *temp = front;
    if(front == NULL){
        cout << "THE List is empty" << endl;
        return;
    }
    else{
       front = front -> next;
    }
    free(temp);
 }


void Print(){
    Node *temp1 = front;
    while(temp1 != NULL){
        printf("%d\n", temp1 -> data);
        temp1 = temp1 -> next;
    }
   printf("\n"); 
}

int main(){
    Enqueue(5);
    Enqueue(23);
    Enqueue(4);
    Print();
    Dequeue();
    Print();
}