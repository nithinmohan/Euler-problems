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
      int arr[50]={4,4,1},i;
      mul(arr,50,350);
      for(i=50;i>=0;i--)
      {
                         
      printf("%d ",arr[i]);
      }
      getch();
      }
      
