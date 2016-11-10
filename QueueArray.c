#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
int array[10];
int front = 0;
int rear = 0;
void enqueue(int value);
void dequeue();
int isFull();
int isEmpty();
void printArray();
int isFull(){
	if(rear == MAXSIZE)
		return 1;
	return 0;
}
int isEmpty(){
	if((front<0) || (front > rear) || front==rear)
		return 1;
	return 0;
}
void enqueue(int value){
	if(isFull()){
		printf("Queue lenght is maximum\n");
		return;
	}
	array[rear] = value;
	rear++;
}
void dequeue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
	}
	front++;
}
void printArray(){
	int i;
	if(isEmpty()){
		printf("Empty Queue\n");
		return;
	}
	for(i=front;i<rear;i++)
		printf("%d\n",array[i]);
}
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	printArray();
	return 0;
}