#include<stdio.h>
int fact(int n);
int main(){
	int n,f;
	printf("Enter a number\n");
	scanf("%d",&n);
	f=fact(n);
	printf("Facorial of %d is %d\n",n,f);
	return 0;
}
int fact(int n){
	if(n==1||n==0)
	return 1;
	else
	return n*fact(n-1);
}
