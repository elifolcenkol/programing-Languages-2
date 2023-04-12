#include<stdio.h>
#include<string.h>

//int uzunluk(char *);

int main(){
	char str[30]={"w3resource"};
	char *ptr=str;

	int n=0,counter=0;
	for(n;ptr[n]!='\0';n++){
		counter++;
	}
	printf("karakter sayisi= %d",counter);
	return 0;
}
