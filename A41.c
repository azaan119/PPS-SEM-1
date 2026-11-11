#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number of elements:");
scanf("%d",&n);

int array[n];
printf("Enter %d integers:",n);
for (i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
sum+=array[i];
}
printf("Sum of all elements = %d\n",sum);
return 0;
}
