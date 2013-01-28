#include<stdio.h>
#include<conio.h>
int palindrom(int a)
{
    int rev=0,num=a;
    while(num>0)
    {
                rev=rev*10+num%10;
                num/=10;
                }
               if(rev==a)
                return 1;
                else return 0;
                
                }
    
main()
{
      int i=100,j,lar=0,a=0,b=0;
      for(i;i<=999;i++)
      for (j=100;j<=999;j++)
      {
      if(palindrom(i*j))
      if(i*j>lar)
      {
      lar=i*j;
      a=i;
      b=j;
      }
      }
      printf("%d %d %d",lar,a,b);
      getch();
      }
