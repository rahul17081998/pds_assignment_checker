#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int c;
int d;
scanf("%d%d%d", &a,&b,&c);
d=b*b-4*a*c;
printf("%f\n",(-b+sqrt(d))/2*a);
printf("%f\n",(-b-sqrt(d))/2*a);
return 0;
}

