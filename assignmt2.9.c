//roatate its digits by one position towards the right.
#include<stdio.h>
int main()
{
 int x=123,r,t;
 r=x%10;
 t=x/10;
 x=(r*100)+t;
 printf("the no. is %d",x);
 return 0;
 }
