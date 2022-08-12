#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void printNode(Node *temp)
{
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}
int main()
{
	// your code goes here
	// 	first node is called as Head
	struct Node *head, *second, *third = NULL;

	// 	allocating menory in memory heap
	head = new Node();
	second = new Node();
	third = new Node();

	// making link between them
	head->data = 50;
	head->next = second;
	second->data = 60;
	second->next = third;
	third->data = 70;
	third->next = NULL; // last node is always pointing to null
	printNode(head);
	return 0;
}
