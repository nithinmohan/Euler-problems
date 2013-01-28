#include<stdio.h>
#include<conio.h>
int prime(long long a)
{
    int flag=1,i;
    for(i=2;i<=a/2;i++)
    {
            if(a%i==0)
            {
                  flag=0;    
                  break;
                  }
                  }
                  return flag;
                  }
                  
main()
{
      long long i,sum=0;
for(i=2;i<2000000;i++)
{
                    
if(prime(i))
{
       sum+=i ;   
        }
        }
          printf("%llu",sum);   
getch();
}

                  
