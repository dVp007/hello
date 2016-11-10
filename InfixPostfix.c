#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int array[10];
int count=-1;
void push(int value);
int pop();
int peek();
int operation(int a,int b,char c);
void printArray();
int peek(){
	if(count<0){
		printf("Stack is empty ... No peek element\n");
		return 0;
	}
	return array[count];
}
void push(int value){
	if(count == 10){
		printf("Overflow :Stack is full\n");
		return;
	}
	count++;
	array[count] = value;
}
int pop(){
	int data;
	if(count<0){
		printf("UnderFlow :Stack is empty\n");
		return 0;
	}
	data = array[count];
	count--;
	return data;
}
void printArray(){
	int i;
	if(count<0){
		printf("Empty Stack\n");
		return;
	}
	for(i=0;i<=count;i++)
		printf("%d\n",array[i]);
}
int getPrecedence(char operator){
	if(operator == '^')
		return 2;
	if(operator == '/' || operator == '*')
		return 1;
	if(operator == '-' || operator == '+')
		return 0;
}
int operation(int a,int b,char operator){
	switch(operator){
		case '*':
			return (a*b);
		break;
		case '/':
			return (a/b);
		break;
		case '-':
			return (a-b);
		break;
		case '+':
			return (a+b);
		break;
	}
	return 0;
}
int postfixConv(){
	char c[20] = {88'5','6','2','+','*','4','2','/','-'};
	int a,b,i;
	for(i=0;i<9;i++){
		if(isdigit(c[i])){
			push(c[i]-'0');
		}
		else{
			a = pop();
			b = pop();
			push(operation(b,a,c[i]));
		}
	}
	return (pop());
}
int main(){
	
	int a = postfixEval();
	printf("%d\n",a);
	//printArray();
	return 0;
}