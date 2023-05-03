#include<stdio.h>

int main(){
	int n=0,a=5,b=7;
	fun(n+2,a,b+n);
	printf("%d %d %d",n,a,b);
	return 0;
}
int fun(int n, int a,int b){
	if(n>=10)
	return 0;
	else
	return fun(n+2,a,b+n);
	
}
