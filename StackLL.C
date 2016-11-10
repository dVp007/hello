#include <stdio.h>
#include <stdlib.h>
typedef struct Node *node;
int top = 0;
struct Node{
	int data;
	struct Node *next;
};
node createNode();
void deleteElement(node head);
void addNode(node head,int value);
void printList(node head);
/**************** functions ***********************/
node createNode(){
	node temp;
	temp = (node)malloc(sizeof(node));
	temp->next = NULL;
	return temp;
}
void deleteElement(node head){
	node previous,current;
	previous = createNode();
	current = head;
	if(current->next == NULL && top == 0){
		printf("UnderFlow : List is empty");
	}
	else{
		while(current->next != NULL){
		previous = current;
		current = current->next;
	}
	top--;
	previous->next = NULL;
	}
}
void addNode(node head,int value){
	node newNode,current;
	if (top == 5){
		printf("OverFlow : List is full");
	}
	else{
		newNode = createNode();
		newNode->data = value;
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		top++;
		current->next = newNode;
	}
}
void printList(node head){
	node p;
	p = head;
	while(p->next != NULL){
		p = p->next;
		printf("%d\n",p->data);
	}
}
int main(){
	int testcase,no_freinds,priority;
	node head;
	head = createNode();
	addNode(head,1);
	addNode(head,2);
	addNode(head,3);
	addNode(head,4);
	deleteElement(head);
	printList(head);
	return 0;
}