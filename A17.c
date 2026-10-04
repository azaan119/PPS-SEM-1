#include<stdio.h>
int main()
{
int m,n,i;
printf("enter m and n:");
scanf("%d %d",&m,&n);
i=m,n;
do
{
if(i%2==0)
printf("%d\n",i);
i++;
}while (i<=n);

}
