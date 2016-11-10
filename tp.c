#include <stdio.h>
void change(int *data);
void change(int *data){
	(*data)[0] = 10;
}
int main(){
	int data[10]={1,2,3,4,5,6,7,8,9};
	int *p = data;
	change();
	printf("%d\n",data[0]);
	return 0;
}