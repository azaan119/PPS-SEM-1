#include<stdio.h>
int main(void)
{
int A[5],key,i;
printf("enter 5 values:");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
printf("enter searching ele:");
scanf("%d",&key);
for(i=0;i<5;i++)
     {
     if(key==A[i]){
     printf("ele found at %d\n",i);
  }
  else
   printf("ele not found");
 }
}
