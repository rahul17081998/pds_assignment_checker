#include<stdio.h>
#include<math.h>
int main () {
    float x,y,theta,u,a,t;
    printf("Enter the value of x = \n");
    printf("Enter the value of y = \n");
    printf("Enter the value of theta = \n");
    printf("Enter the value of u = \n");
    printf("Enter the value of a = \n");
    printf("Enter the value of t = \n");

    scanf("%f%f%f%f%f%f",&x,&y,&theta,&u,&a,&t);
    float X=x+u*cos((theta*180)/3.14)*t+0.5*a*pow(t,2);
    printf("%f\n",X);
    float Y=y+u*sin((theta*180)/3.14)*t+0.5*a*pow(t,2);
    printf("%f\n",Y);
















return 0;
}