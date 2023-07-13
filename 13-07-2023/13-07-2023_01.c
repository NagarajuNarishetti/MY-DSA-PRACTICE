#include<stdio.h>
#include<stdlib.h>

int *ptr,len,i;

 void main(){
  printf("\n\nenter the length of array");
  scanf("%d",&len);
  printf("\nenter elements in to an array\n");
  ptr=(int*)malloc(len*sizeof(int));
 
  for(i=0;i<len;i++)
  scanf("%d",ptr+i);
  for(i=0;i<len;i++){
  	printf("Element at A[%d] is %d stored at %u \n",i,ptr[i],&ptr[i]);
  }
}

