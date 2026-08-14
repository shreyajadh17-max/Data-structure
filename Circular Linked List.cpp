#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
};
int main()
{
	struct Node *head;
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=10;
	newNode->next=head;
	newNode->next=newNode;
	head=newNode;
	
	cout<<"Node created with data:"<<head->data<<endl;
	free(head);
}