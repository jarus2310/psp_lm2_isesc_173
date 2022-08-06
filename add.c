/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int add(int x,int y,int z,int m)
{
    int s=x+y+z+m;
    return s;
}
int main()

{
    int a,b,c,d,sum;
    printf("Enter the numbers to be added\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=add(a,b,c,d);
    printf("%d+%d+%d+%d=%d",a,b,c,d,sum);
    return 0;
}

