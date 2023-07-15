#include<stdio.h>
void tower_of_hanoi(int n,char A ,char B,char C);
int main(){   
int n;
printf("\nenter number of disks   :  ");
scanf("%d",&n);
tower_of_hanoi(n,'A','B','C');
return 0;
}
void tower_of_hanoi(int n,char A ,char B,char C)
{
if(n==1)
printf("\n\t move disk 1 from rod %c to %c",A,C);
else{
    tower_of_hanoi(n-1,A,C,B);
    printf("\n\t move disk %d from rod %c to %c",n,A,C);
    tower_of_hanoi(n-1,B,A,C);
 }
   }
