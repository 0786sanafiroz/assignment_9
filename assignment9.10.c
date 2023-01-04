#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c,D;
    float x,y;
    printf("enter coefficient of x^2,x and coffecient term");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
     switch(D<0)
     {
         case 1:printf("both roots are imaginary");
         break;
         case 0:printf("it is not imaginary");
         break;
     }
     switch(D==0)
     {
        case 1: printf("both roots are equal");
        x=-b/(2.0*a);
        printf("roots are %f",x);
        break;
     }
     switch(D>0)
     {
     case 1:
        printf("roots are distinct and real");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nRoots are: %f,%f",x,y);
        break;
     }
     return 0;
}
