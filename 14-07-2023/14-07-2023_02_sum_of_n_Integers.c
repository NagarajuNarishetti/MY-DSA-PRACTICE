#include<stdio.h>
int sum(int n,int a[]);
int main(){
	int i,n,s;
	printf("Enter a number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements into the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=sum(n,a);
	printf("Sum of integers is %d\n",s);
	return 0;
}
int sum(int n, int a[]){
	if(n==0)
	return 0;
	else
	return a[n-1]+sum(n-1,a);
}
