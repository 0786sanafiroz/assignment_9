#include<stdio.h>
int main()
{
 int x,y,z,choice;
 printf("1. addition\n2.subtraction\n3.multiplication\n4.division\n5.exit");
 scanf("%d",&choice);
 while(1)
 {
  switch(choice)
  {
   case 1:
     printf("enter two num:\n");
     scanf("%d %d",&x,&y);
     z=x+y;
     printf("addition is%d\n",z);
   break;
   case 2:
     printf("enter two num:\n");
     scanf("%d %d",&x,&y);
     z=x-y;
     printf("substraction is%d\n",z);
    break;
   case 3:
     printf("enter two num:\n");
     scanf("%d %d",&x,&y);
     z=x*y;
     printf(" multiplication is%d\n",z);
   break;
   case 4:
     printf("enter two num:\n");
     scanf("%d %d",&x,&y);
     z=x/y;
     printf(" division is%d\n",z);
    break;
   case 5:printf("exit\n");

   break;
   default:
    printf("invalid choice");
    }}
    return 0;
    }
