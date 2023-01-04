//write a program which take number as input and give months name as output.
#include<stdio.h>
 int main()
 {
  int n;
  printf("enter the number 1 to 12:");
  scanf("%d",&n);
  switch(n)
  {
   case 1:  printf("january");
   break;
   case 2:  printf("febuary");
   break;
   case 3: printf("March");
   break;
   case 4: printf("april");
   break;
   case 5: printf("may");
   break;
   case 6: printf("june");
   break;
   case 7: printf("july");
   break;
   case 8:printf("august");
   break;
   case 9:printf("september");
   break;
   case 10:printf("october");
   break;
   case 11: printf("november");
   break;
   case 12: printf("december");
   break;
   deafault:
   printf("invalid choice");
    }
    }
