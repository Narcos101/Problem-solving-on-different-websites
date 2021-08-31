#include<iostream>    //Time complexity analysis
                       //Push operations:=
using namespace std;  //O(1) for Best- case
                      //O(n) for worst-case if stack is full copy all elements and store them in a new array.
                      //O(1) for average case 
#define Max 100

class Stack{
private:
    int A[Max];
    int top;
public:
    Stack(){
        top = -1;
    }
    void Push(int x){
        if(top == Max - 1){
            cout << "Error:- Stack Overflow!" << endl;
            return;
        }
        top++;
        A[top] = x;
        }
    void Pop(){
        if(IsEmpty()){
            cout << "The stack is Empty!" << endl;
            return;
        }
        printf("%d", A[top]);              
        top--;
    }
    int IsEmpty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
    void Print(){
        int i, top;
        cout << "The Numbers in the stack are: " << endl;
        for(i=0;i<=top;i++){
            cout << A[i] << endl;
        }
        printf("\n"); 
    }
    int Top(){
        return A[top]; 
    }    
};

int main(){
    Stack S;
    S.Push(4); S.Print();
    S.Push(6); S.Print();
    S.Push(5); S.Print();
    S.Pop(); S.Print();
    S.Push(12); S.Print();

}