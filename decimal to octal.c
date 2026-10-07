#include<stdio.h>
void main()
{
    int deci,octal=0,i=1,rem;
    printf("enter number in decimal");
    scanf("%d",&deci);
    while(deci!=0)
    {
    rem=deci%8;
    deci=deci/8;
    octal=octal+rem*i;
    i=i*10;
        }
    printf("%d",octal);
}
