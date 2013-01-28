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
      long long i,num=0;
for(i=2;i<1000000;i++)
{
                      printf("%llu",num);
if(prime(i))
{
        num++ ;   
        }
        if(num==10001)
        {
                     printf("%llu",i);
                     break;
                     }
                     }
getch();
}

                  
