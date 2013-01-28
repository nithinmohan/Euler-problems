#include<stdio.h>
#include<conio.h>
main()
{
      int a=0,sum=0;
      int b=1;
      while(a<4000000)
      {
                  
                  b=a+b;
                  a=b-a;
                  if(b%2==0)
                  sum+=b;
                   printf("%d ",b);
                  }
                 printf("sum=%d ",sum);
                  getch();
                  }
                  
