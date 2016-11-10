#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 7
int array[10];
int front = 0;
int rear = -1;
void enqueue(int value);
void dequeue();
int isFull();
int isEmpty();
void printArray();
int isFull(){
	if(rear > MAXSIZE-1)
		return 1;
	return 0;
}
int isEmpty(){
	if((front<0) || (front > rear))
		return 1;
	return 0;
}
void enqueue(int value){
	if(isFull()){
		printf("Queue length is maximum\n");
		return;
	}
	rear++;
	array[rear] = value;
}
void dequeue(){
	if(isEmpty()){
		printf("Queue is Empty\n");
	}
	array[front] = -1;
	rear = (rear == MAXSIZE-1)?-1:rear;
	front++;
}
void printArray(){
	int i;
	for(i=0;i<MAXSIZE;i++)
		printf("%d\n",array[i]);
}
int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	enqueue(7);
	dequeue();
	enqueue(8);
	dequeue();
	dequeue();
	enqueue(9);
	printArray();
	return 0;
}