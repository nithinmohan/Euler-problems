#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,k;
      for(i=0;i<1000;i++)
      for(j=0;j<1000;j++)
      {
      k=1000-i-j;
      if(i*i+j*j==k*k)
      printf("%d %d %d",i,j,k);
      }
      getch();}
