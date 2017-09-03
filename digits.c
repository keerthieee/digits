#include<stdio.h>
int main()
{
int a,b,n;
scanf("%d",&n);
while(n>0)
{
a=n%10;
++count;
b=n/10;
n=b;
}
printf("%d",count);
return 0;
}
