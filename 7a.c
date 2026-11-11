#include <stdio.h>
void main()
{
int s[5],sum=0;
printf("enter the 5 numbers");
for(int i=0;i<5;i++)
scanf("%d",&s[i]);
for(int i=0;i<5;i++)
sum=sum+s[i];
printf("sum=%d",sum);
}
