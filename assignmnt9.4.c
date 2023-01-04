#include<stdio.h>
 int main()
 {
  int choice,x,y,z;
  printf("1.the length of three no. is isoceles triangle or not\n");
  printf("2.the set of three no.length are side angled length or not\n");
  printf("3.the set of three no.length are equillateral triangle or not\n");
   scanf("%d",&choice);
   while(1)
   {
   switch(choice)
   {
   case 1:
     printf("enter three no.\n");
     scanf("%d %d %d",&x,&y,&z);
      if(x==y||y==z||z==x)
        printf("yes it is isoceles triangle");
    else
         printf("it is not isoceles triangle");
  break;
   case 2:
    printf("enter three no.\n");
    scanf("%d %d %d",&x,&y,&z);
     if(x*x+y*y==z||x*x+z*z ==y || y*y+z*z==x)
     printf("yes it is side angled lenth\n");
     else
     printf(" it is not side angles length\n");
   break;
   case 3:
    printf("enter three no.\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && y==z)
    printf("yes it is equillateral angle\n");
    else
     printf(" it is not equillateral angle\n");
   break;
   case 4:
   printf("exit");
   break;
   default:
   printf("invalid choice");
   }
   }
   return 0;
}
