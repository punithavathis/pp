#include<stdio.h>
int main()
{
int year;
printf("enter the year:\n");
scanf("%d",&year);
if(year%400==0)


printf("%d is leap year:\n");

else
    if(year%4==0)
    printf("%d is leap year:\n");
    else
printf("%d is not leap year:\n");
return 0;
}
