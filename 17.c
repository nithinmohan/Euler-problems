#include<stdio.h>
int special(int num)
{
	if(num==10)
	return 3;
	else if(num==11|num==12)
	return 6;
	else if(num==13||num==14||num==18||num==19)
	return 8;
	else if(num==15||num==16)
	return 7;
	else if(num==17)
	return 9;
}
int numdig(int n,int p)
{
	if(n==0)
	return 0;
	if(p==1)
	{
		if(n==1||n==2||n==6)
		return 3;
		else if(n==3||n==7||n==8)
		return 5;
		else if(n==4||n==5||n==9)
		return 4;
	}
	if(p==2)
	{
		if(n==2||n==3||n==8||n==9)
		return 6;
		else if(n==4||n==5||n==6)
		return 5;
		else if(n==7)
		return 7;
	}
	if(p==3)
	return 7+numdig(n,1);
}
int fsum(int num)
{
	int h,t,o,sum=0;
	h=num/100;
	t=(num-h*100)/10;
	o=num%10;
	sum=sum+numdig(h,3);
	if(h&&(t||o))
	sum=sum+3;
	if(t==1)
	{
	sum=sum+special(10+o);
	}
	else 
	{
		sum=sum+numdig(t,2);
		sum=sum+numdig(o,1);
	}
	return sum;
}
main()
{
	
	int i=1,totsum=0;
	for(i=1;i<1000;i++)
	totsum=totsum+fsum(i);
	printf("%d",totsum+11);
}
