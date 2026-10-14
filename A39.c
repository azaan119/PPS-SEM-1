#include <stdio.h>
int f(int n)
{
if (n==0)
{
return 0;
}else if (n==1)
{
return 1;
}
else
{
return f(n-1)+f(n-2);
}
}
int main()
{
int terms,i;
printf("Enter number:");
scanf("%d",&terms);
printf("Fibonacci series:");
for (i=0;i<terms;i++)
{
printf("%d ",f(i));
}
printf("\n");
return 0;
}
