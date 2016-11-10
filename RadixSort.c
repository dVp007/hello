#include <stdio.h>
int array[10] = {100,223,64,41,5};
int largest();
int largest(){
	int i,j,lar=array[0];
	for(i=0;i<5;i++){
		if(array[j]>lar)
			lar = array[j];
	}
	return lar;
}

int main(){
	printf("%d\n",largest());
	return 0;
}