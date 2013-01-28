#include<stdio.h>
#include<conio.h>
void mul(int arr[],int limit,int n)
{
     int carry=0,i=0,ans;
     for(i;i<limit;i++)
     {
                       ans=arr[i]*n;
                       arr[i]=carry+ans%10;
                       carry=ans/10;
     }
}
main()
{
      int arr[1000]={1},i;
      long sum=0;
       for(i=999;i>=0;i--)
      mul(arr,500,2);
      for(i=500;i>=0;i--)
      {
                         sum+=arr[i];
      printf("%d ",sum);
      
      }
        printf("%l********************",sum);
      getch();
      }
     
