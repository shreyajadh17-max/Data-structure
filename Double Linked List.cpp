#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
	int data;
	struct Node *previous;
	struct Node *next;

};

int main()
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data=10;
	newNode->previous=NULL;
	newNode->next=NULL;
	
	cout<<newNode->data<<endl;
	cout<<"Next Node:"<<newNode->next<<endl;
	
}