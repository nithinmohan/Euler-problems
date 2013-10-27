#include<stdio.h>
int isleap(int year)
{
	return year%400==0||(year%4==0&&year%100!=0);
}
populatedayarray(int a[12],int year)
{
	int i=0;
	a[0]=31;
	for(i=1;i<12;i++)
	{
		if(i==2)
		{
		if(isleap(year))
			 { 	
			 	a[i]=a[i-1]+29;
			 	continue;
			 }
			 a[i]=a[i-1]+28;
		}
		else if(i==3||i==5||i==8||i==10)
		a[i]=a[i-1]+30;
		else a[i]=a[i-1]+31;
	}
}
populateyearsfirst(int yearsfirst[100])
{
	yearsfirst[0]=(0+365)%7;
	int i=0;
	for(i=1;i<100;i++)
	{
		if(isleap(i+1901-1))
		yearsfirst[i]=(yearsfirst[i-1]+366)%7;
		else
		yearsfirst[i]=(yearsfirst[i-1]+365)%7;
	}
}
int numsundays(int year,int firstday)
{
	int dayarray[12];
	populatedayarray(dayarray,year);
	int i=0,num=0;
	for(i=0;i<12;i++)
	{
		if((dayarray[i]+firstday)%7==6)
		num++;
	}
	return num;
}
main()
{
	int yearsfirst[100],sum=0,i=2000;
	populateyearsfirst(yearsfirst);
	for(i=1901;i<=2001;i++)
	sum=sum+numsundays(i,yearsfirst[i-1901]);
	printf("%d",sum);
	
}
