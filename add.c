#include <stdio.h>
#include<math.h>
int main()
{
    /* local variable declaration */
  int a,b,sum;
  printf("enter the two numbers for addition\n");
  scanf("%d%d",&a,&b);                                    //reading the input
  sum=a+b;                                                //equation for sum of two no.s 
  printf("the sum of %d and %d is %d",a,b,sum);           //displaying the sum 
  return 0;
}                     
