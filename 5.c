#include<stdio.h>
void main()
{
 int i,j,n,num;
 printf("enter no. of row in pascal triangle :");
 scanf("%d", &n);
 for(i=1;i<=n;i++)
{

 num=1;
 for(j=1;j<=i;j++)
{
 printf("%d",num);
 num=num*(i-j)/j;
}
 printf("\n");

}

}
