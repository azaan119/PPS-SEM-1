#include<stdio.h>
void main()
{
int bin,deci=0,i=1,rem;
printf("enter number in binary:");
scanf("%d",&bin);
while(bin!=0)
 {
rem=bin%10;
bin=bin/10;
deci=deci+rem*i;
i=i*2;
 }
printf("%d",deci);
}
