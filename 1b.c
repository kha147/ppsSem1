# include<stdio.h>
 void main()
 {
     int i,n,rem,arm,temp;
     arm=0;
     printf("enter the number");
     scanf("%d",&n);
     temp=n;
     while(n!=0)
     {
          rem=n%10;
          arm=arm+rem*rem*rem;
          n=n/10;

     }
     if (arm==temp)
        printf("given numberis is armstrong");
     else
        printf("given number is not armstrong");
 }
