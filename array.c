// mult of array 
#include<stdio.h>
int main()
{
 int a[20];
 int mul=1;
 
 int i;
 printf("enter the value in array ");
 for(int i=0;i<=5;i++)
 {
 scanf("%d",&a[i]);
 
 mul*=a[i];
 }
 printf("result =%d",mul);

}


