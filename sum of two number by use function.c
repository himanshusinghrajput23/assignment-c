#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
printf("enter the frist number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
int s=a+b;
printf("sum is %d",s);
return 0;
}
int sum(int a,int b)
{ 
    return a+b;
}