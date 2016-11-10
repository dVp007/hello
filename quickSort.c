#include <stdio.h>
#include <stdbool.h>
#define MAX 7

int array[MAX] = {4,6,5,44,31,23,8};

void quickSort(int left,int right);
int partion(int left,int right,int pivot);
void swap(int num1,int num2);
void display();
void display(){
      int i;
   printf("[");
   
   // navigate through all items 
   for(i = 0;i<MAX;i++) {
      printf("%d ",array[i]);
   }
   
   printf("]\n");
}
void swap(int num1,int num2){
   int temp = array[num1];
   array[num1] = array[num2];
   array[num2] = temp;
}
int partion(int left,int right,int pivot){
   int leftPointer = left-1;
   int rightPointer = right;
   while(1){
      while(array[++leftPointer]<pivot){}
      while(rightPointer >0 && array[--rightPointer]>pivot){}
      if(leftPointer >= rightPointer){
         break;
      }else{
         swap(leftPointer,rightPointer);
      }
   }
   swap(leftPointer,right);
   display();
   return leftPointer;
}
void quickSort(int left,int right){
   if(right-left <= 0) return;
   else{
      int pivot = array[right];
      int partionPoint = partion(left,right,pivot);
      quickSort(left,partionPoint-1);
      quickSort(partionPoint+1,right);
   }
}
int main(){
   quickSort(0,MAX-1);
   display();
}