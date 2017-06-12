#include <stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
printf("%c is an alphabet.",c);
else
    if((c>=48&&c<=57))

printf("%c is an digit.",c);
else
    printf("%c is a special character");
return 0;
}
