#include<stdio.h>
#include<stdlib.h>
void ins_begin();
void ins_end();
void ins_spec();
void del_begin();
void del_end();
void del_specfic();
void search();
void display();

int *ptr,*p,*e,*s,*b,*en,*sp,len,i;

 main (){
  printf("\n\nenter the length of array");
  scanf("%d",&len);
  printf("\nenter elements in to an array\n");
  ptr=(int*)malloc(len*sizeof(int));
 
  for(i=0;i<len;i++)
  scanf("%d",ptr+i);
  int c;
    do{

  printf("\n\nenter\n1.insert at begin\n2.insert at end\n3.insert at specific\n");
  printf("4.delete at begin\n5.delete at end\n6.delete at specific\n7.Search for a key value\n8.To display the array\n");
  printf("9.to exit   :   ");
  scanf("%d",&c);
  switch(c){
  case 1:ins_begin();
  break;
  case 2:ins_end();
  break;
  case 3:ins_spec();
  break;
  case 4:del_begin();
  break;
  case 5:del_end();
  break;
  case 6:del_specfic();
  break;
  case 7:search();
  break;
  case 8:display();
  break;
  case 9:printf("\n***thank you***");
  break;
  default:printf("enter vaid input\n");
}
 }while(c!=9);
}

void ins_begin(){
int ele;
printf("enter the element\n");
scanf("%d",&ele);
p=(int*)malloc((len+1)*sizeof(int));
p[0]=ele;
for(i=1;i<len+1;i++){
p[i]=*(ptr+i-1);
}
ptr=realloc(ptr,(len+1)*sizeof(int));
for(i=0;i<len+1;i++)
ptr[i]=p[i];
printf("\n");
len++;

}
void ins_end(){
	
int ele;
printf("enter the element\n");
scanf("%d",&ele);
e=(int*)malloc((len+1)*sizeof(int));
e[len]=ele;
for(i=0;i<len;i++){
e[i]=*(ptr+i);
}
ptr=realloc(ptr,(len+1)*sizeof(int));
for(i=0;i<len+1;i++)
ptr[i]=e[i];
printf("\n");
len++;
}
void ins_spec(){
int ele,po;
printf("enter the position\n");
scanf("%d",&po);
if(po>len||po<len)
printf("please enter valid position\n");
else{

printf("enter the element\n");
scanf("%d",&ele);
s=(int*)malloc((len+1)*sizeof(int));
for(i=0;i<len;i++){
s[i]=*(ptr+i);
}
for(i=len;i>=po;i--){
s[i]=*(ptr+i-1);
}
s[po-1]=ele;
ptr=realloc(ptr,(len+1)*sizeof(int));
for(i=0;i<len+1;i++)
ptr[i]=s[i];
len++;
}
}
void del_begin(){
int ele;
b=(int*)malloc((len-1)*sizeof(int));
for(i=0;i<len-1;i++){
b[i]=*(ptr+i+1);
}
ptr=realloc(ptr,(len-1)*sizeof(int));
for(i=0;i<len-1;i++)
ptr[i]=b[i];
printf("\n");
len--;


}
void del_end(){
int ele;
en=(int*)malloc((len-1)*sizeof(int));
for(i=1;i<len+1;i++){
en[i-1]=*(ptr+i-1);
}
ptr=realloc(ptr,(len-1)*sizeof(int));
for(i=0;i<len-1;i++)
ptr[i]=en[i];
printf("\n");
len--;

}
void del_specfic(){

int po;
printf("enter the position\n");
scanf("%d",&po);
if(po>len)
printf("please enter position correctly");
else{
sp=(int*)malloc((len-1)*sizeof(int));
for(i=0;i<len;i++){
sp[i]=*(ptr+i);
}
for(i=po-1;i<len-1;i++){
sp[i]=*(ptr+i+1);
}
for(i=0;i<len-1;i++)
printf("%d\t",sp[i]);
ptr=realloc(ptr,(len-1)*sizeof(int));
for(i=0;i<len-1;i++)
ptr[i]=sp[i];
len--;
}
}
void search(){
	int found=0,ele;
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
void display(){
printf("\n\n**array elements are:**\n");
for(i=0;i<len;i++)
printf("%d\t",*(ptr+i));

}


