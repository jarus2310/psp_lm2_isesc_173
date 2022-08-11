#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,r1,r2,i;
    printf("Enter the coefficients\n");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    
    if (D>0)
    {
        printf("The roots are real and distinct\n");
        r1=(-b+D)/2*a;
        r2=(-b-D)/2*a;
        printf("the roots are %f & %f.",r1,r2);
    }
    else if (D==0)
    {
        printf("the roots are real and equal\n");
        r1=r2=-b/2*a;
        printf("the roots are %f & %f.",r1,r2);
    }
    else if (D<0)
    {
        printf("the roots are complex conjugates\n");
        r1=(-b+sqrt(-D))/2*a;
        r2=(-b-sqrt(-D))/2*a;
        printf("the roots are %f and %f",r1,r2);
    }
    return 0;
}
