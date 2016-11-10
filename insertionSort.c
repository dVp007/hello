#include <stdio.h>
#define MAX 8
int a[10] = {12,334,1123,2,3124,23,41,2};

void insertionSort(){
	int valueToInsert;
	int holePosition;
	int i;
	for(i = 1;i<MAX;i++){
		valueToInsert = a[i];
		holePosition = i;
		while(holePosition > 0 && a[holePosition-1] >valueToInsert){
			a[holePosition] = a[holePosition-1];
			holePosition--;
		}
		if(holePosition != i){
			a[holePosition] = valueToInsert;
		}
	}
}
void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i<MAX;i++) {
      printf("%d ",a[i]);
   }
	
   printf("]\n");
}
int main(){
	insertionSort();
	display();
}