#include<stdio.h>

int main(void){
	int dizi[5]={5,7,2,9,8};
	int *ptr,n=0;
	ptr=&dizi[n];
	
	for(n;n<=4;n++){
		printf("dizinin %d.elemani=%d\n",n+1,*ptr);

	}
	return 0;
}
