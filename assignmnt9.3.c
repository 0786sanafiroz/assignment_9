#include<stdio.h>
 int main()
 {
   int choice;
   printf("enter the 1 to 7:");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    printf("monday....its a starting day");
    break;
    case 2:
    printf("tuesday....");
    break;
    case 3:
    printf("wednesday....");
    break;
    case 4:
    printf("thrusday......");
    break;
    case 5:
    printf("friday......");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
        printf("sunday...fundayyyyy");
        break;
    default:
    printf(" invalid choice");
    }
    return 0;
    }
