#include <stdio.h>
#include <stdlib.h>
typedef struct Node *node;//Define node as pointer of data type struct LinkedList
node createNode();
void addNode(node head,int value);
void deleteNode(node head,int key);
int elementExist(node head,int value);
void printList(node head);
struct Node{
	int data;
	struct Node *next;
};
//***********************functions*****************************
int elementExist(node head,int value){
	node p;
	p = head;
	while(p->next != NULL){
		p = p->next;
		if(p->data == value)
			return 1;
	}
	return 0;
}
node createNode(){
	node temp; //Declare a node
	temp = (node)malloc(sizeof(node));//allocate memorary using malloc
	temp->next = NULL;//make next pointer to null
	return temp; //return the new node;
}
void addNode(node head,int value){
	node temp,p;
	temp = createNode();
	temp->data = value;
	p = head;
	while(p->next != NULL){
		p = p->next;
	}
	p->next = temp;
}
void deleteNode(node head,int key){
	if(!elementExist(head,key))
		printf("Key does not exist...\n");
	else{
		node previous = createNode();
		node current = head;
		while(current->data != key){
			previous = current;
			current = current->next;
		}
		previous->next = current->next;	
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
	deleteNode(head,1);
	deleteNode(head,3);
	addNode(head,4);
	deleteNode(head,4);
	printList(head);
	return 0;
}
