#include <stdio.h>
int positivenegative()
{
    int a;                                                   
    printf("Enter the value:");
    scanf("%d",&a);

if (a>0)
{
    printf("The value is positive... ");
}
else if (a<0)
{
    printf("the value is negative...");
}
else
{
printf("The value is O");
}
return 0;
}
