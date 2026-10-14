#include<stdio.h>
int gcd (int n1,int n2);
void main()
{
int a,b,res;
printf("enter two values:");
scanf("%d %d",&a,&b);
res=gcd(a,b);
printf("gcd=%d",res);

}
int gcd(int n1,int n2)
{
if (n2==0)
return n1;
else
return gcd(n2,n1%n2);
}
