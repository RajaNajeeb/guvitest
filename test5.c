#include<stdio.h>
int main()
{
  int i;
  scanf("%d",&i);
  if(i%400==0)
  {
   printf("%d is a leap year",i);
   }
   else if(i%100==0)
   {
      printf("%d is not a leap year",i);
    }
    else if(i%4==0)
    {
     printf("%d is a leap year",i);
    }
     else
     {
       printf("%d is not a leap year",i);
      }
    return 0;
}
    
