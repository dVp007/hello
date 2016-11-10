#include <stdio.h>
#include <stdlib.h>
int array[10];
int count=0;
void insert(int value);
void deleteElement(int value);
int find(int value);
void sort();
void printArray();
void insert(int value){
	if(count == 10){
		printf("Array lenght is maximum\n");
		return;
	}
	array[count] = value;
	count++;
}
void deleteElement(int value){
	int loc,i;
	if(count == 0){
		printf("Cannot delete from an empty Array\n");
		return;
	}
	loc = find(value);
	if(!loc){
		printf("Element not found\n");
		return;
	}
	for(i = loc;i<count;i++){
		array[i] = array[i+1];
	}
	count--;
}
int find(int value){
	int i;
	for(i = 0;i<count;i++){
		if(value == array[i])
			return i;
	}
	return 0;
}
void printArray(){
	int i;
	if(count == 0){
		printf("Empty Array\n");
		return;
	}
	for(i=0;i<count;i++)
		printf("%d\n",array[i]);
}
void sort(){
	int i,j,temp;
	if(count == 0){
		printf("Empty Array\n");
		return;
	}
	for(i=0;i<count;i++){
		for(j=i+1;j<count;j++){
			if(array[i] > array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
int main(){
	insert(1);
	insert(5);
	insert(4);
	insert(2);
	sort();
	printArray();
	return 0;
}