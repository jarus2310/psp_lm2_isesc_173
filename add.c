#include <stdio.h>
int add(int x,int y,int z)
{
    int s=x+y+z;
    return s;
}
int main()

{
    int a,b,c,sum;
    printf("Enter the numbers to be added\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=add(a,b,c);
    printf("%d+%d+%d=%d",a,b,c,sum);
    return 0;
}
