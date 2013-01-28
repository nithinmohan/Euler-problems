#include<stdio.h>
#include<conio.h>
main()
{
      long long a[1000000]={0};
      int j,i;
      for(j=2;a[j]==0 && j<1415;j++)
      {printf("**********");
      getch();
      for(i=2*j;i<2000000;i=i+j)
      {
                                printf("#########");
                                
      a[i]=1;
      }
      }
      }
