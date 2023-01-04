#include<stdio.h>
 int main()
 {
  int var,choice;
  printf("enter any 3 choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: printf("good");
   break;
   case 2: printf(" better ");
   break;
   case 3: printf(" best ");
   default:
   printf("invalid choice");
   }
   return 0;
   }
