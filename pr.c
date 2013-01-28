#include<stdio.h>
#include<conio.h>
main()
{
      int i=2;
    long long n= 600851475143LL;
      for(i;i<=n;i++)
      {
                 while(n%i==0)
                    n/=i;
                   
                    if(n==1)
                    {
                    printf("***************%d ",i);
                    getch();
                    }
                    }}
