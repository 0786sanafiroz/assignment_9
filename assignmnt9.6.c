#include<stdio.h>
int main()
{
 int year;
 printf("enter the year");
 scanf("%d",&year);
 {
     switch(year%400==0)
     {
 case 0:
     switch(year%4==0)
     {
    case 0:
    printf(" it is leap year\n\n");
    break;
   case 1:
    printf(" non leap year \n\n");
     break;
     }
 case 1:
     switch(year%400==0)
     {
     case 0:
        printf("it is non leap year\n\n");
        break;
     case 1:
        printf(" it is leap year");
        break;
     }

 }

 }
 return 0;
}
