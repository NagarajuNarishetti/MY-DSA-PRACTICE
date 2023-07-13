#include<stdio.h>
#include<stdlib.h>

int *ptr,len,ele,i,found=0;

 main (){
 	
  printf("\n\nenter the length of array");
  scanf("%d",&len);
  printf("\nenter elements in to an array\n");
  ptr=(int*)malloc(len*sizeof(int));
 
  for(i=0;i<len;i++)
  scanf("%d",ptr+i);
  printf("enter element to search \n");
  scanf("%d",&ele);
    for(i=0;i<len;i++){
  if(ptr[i]==ele){
  	printf("Element %d is found at %u at index %d\n",ele,&ptr[i],i);
  	found++;
	 break;
  }
  }
  if(found==0)
  printf("sorry %d is not found\n",ele);
  
    }


