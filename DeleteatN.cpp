#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *end1 = NULL;
void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        end1 = temp;
        return;
    }
    else
    {
        end1->next = temp;
        end1 = temp;
    }
}
void Delete(int n)
{
    int i;
    Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for (i = 1; i < n - 1; i++)
    {
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
void Print()
{
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
}
int main()
{
    Insert(5);
    Insert(5);
    Insert(3);
    Insert(23);
    Delete(4);
    Print();
}
