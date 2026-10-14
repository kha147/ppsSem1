#include<stdio.h>
int sum (int n)
{
if (n==0)
return 0;
return n+sum(n-1);
   }
   int main()
    {
        int n,s;
        printf("enter a number");
        scanf("%d",&n);
        s=sum(n);
        printf("sum of first %d natural number is%d,n,s");
        return 0;

}
