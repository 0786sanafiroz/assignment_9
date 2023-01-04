#include<stdio.h>
int main()
{
 int unit = 120,total,finaltotal;
  switch(50<unit)
  {
   case 1://50>unit
       switch(150<unit)
       {
           case 0:
               //150<unit
             total=25+(unit-50)*0.75;
           break;
           case 1://150>unit
               total=25+75+(unit-150)*1.20;
            break;

       }
     break;
    case 0://50<unit
        total=unit*.5;
        break;

      }
      finaltotal =total+total*0.2;
      printf("total amount =%d\n",finaltotal);
            return 0;
    }
