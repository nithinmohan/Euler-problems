#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    long long a[250000];
    a[0]=2;
    int limit=0;
    long long i;
    long long j;
    for(i=3;i<2000000LL;i++)
    {
    int flag=1;
    for(j=0;j<=limit && a[j]<=sqrt(i);j++)
    {
    if(i%a[j]==0)
    flag=0;
}       
    if(flag==1)
    {
               limit++;
               a[limit]=i;
               printf("%llu ",a[limit]);
               }
               }
             long long k;
              long long sum=0;
    for(k=0;k<=limit;k++)
    sum+=a[k];
    printf("summmmmmmmmmmmmmmmmmmmmm=====%llu ",sum);
    getch();
}
    
