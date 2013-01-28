#include<stdio.h>
#include<conio.h>
void mul(arr,limit,n)
{
     int carry=0,i=0;
     for(i;i<limit;i++)
     {
                       int ans=arr[i]*n;
                       arr[i]=carry+ans%10
                       carry=ans/10;
     }
}
main()
{
      int arr[5]={1,2,3,4,5},i;
      mul(arr,5,2);
      for(i=0;i<5;i++)
      printf("%d",arr[i]);
      }
     
