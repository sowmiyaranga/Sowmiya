#include <stdio.h>
int main(void) 
{
int a;
scanf("%d",&a);
if(a%2==0&&a>0)
{
printf("Even");
}
else if(a<0)
{
printf("invalid");
}
else
{
printf("Odd");
}
return 0;
}
