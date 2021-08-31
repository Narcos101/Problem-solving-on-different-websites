#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *end1 = NULL;;
Node* Insert(Node*head, int data){        /*Recursive method uses Implicit stack(Stack in the memory)
                                            therefore, Time Complexity = O(n), Space Complexity = O(n) */
    Node*temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    while(head == NULL){
        head = temp;
        end1 = temp;
        return 0;
    }
    end1 -> next = temp;
    end1 = temp;
    return head;
}

Node* Reverse(Node*p){
    Node *head=  p;
    if(p->next == NULL){
        head = p;
        return 0;
    }
    Reverse(p->next);
    p -> next -> next = p;
    p -> next = NULL;
    return head;
}

void Print(Node *temp1){
    while(temp1 != NULL){
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;
    }
   printf("\n"); 
}

int main(){
    Node *head = NULL;
    int x,n,i;
    cout <<"Enter how many numbers you want to insert" << endl;
    cin >>n;
    for(i = 1; i<= n; i++){
        cout << "Enter the number you want to insert" << endl;
        cin >>x;
        head = Insert(head, x);
        cout << "The numbers in the list are:- " << endl;
        Print(head);
    }
    cout << "The numbers after reversing are:- " << endl;
    Reverse(head);
    Print(head);
}    