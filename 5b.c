#include<stdio.h>
#include<math.h>
int main()
{
 int a,b,c,d,r1,r2;
 printf("enter the value of a,b,c");
 scanf("%d %d %d", &a,&b,&c);
 d=b*b-4*a*c;
 if (d<0)
{
  printf("display roots are imajinary");
}

 else if(d==0)
{
  r1=-b/a;
  printf("display roots are equal");
  printf("r1=%d",r1);
}
 else
{
  r1=(-b+sqrt(d))/2*a;
  r2=(-b-sqrt(d))/2*a;
  printf("%f %f",r1,r2);
}


}

