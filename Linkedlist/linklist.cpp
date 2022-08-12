#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    //  Constructor
    node(int value)
    {

        data = value; // automatic assign value to data
        next = NULL;  // next pointer point to null
    }
};

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void addFirst(int val)
{
    struct node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}
main()
{
    //    initalize head node
    struct node *head = NULL;
    int a;
    cin >> a;
    addFirst(a);
}