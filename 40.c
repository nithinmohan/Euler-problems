#include<stdio.h>
#include<math.h>
findnthdigit(int num,int n)
{
	//finding num of digits
	int i=0,temp=num,target,temp2;
	while(temp)
	{
		i++;
		temp/=10;
	}
	//from last digit
	target=i-n;
	if(target>=0)
	temp2=(num-num%(int)pow(10,target))/pow(10,target);
	return temp2%10;
}
int find(long long int a)
{
	long long int nextsub=9,nextnum;
	int i=1;
	while(a-nextsub*i>0)
	{
		a=a-nextsub*i;
		nextsub*=10;
		i++;
	}
	if(a%i==0)
	{
nextnum=a/i+pow(10,i-1)-1;
return findnthdigit(nextnum,i);
}
else
{
nextnum=a/i+pow(10,i-1);
return findnthdigit(nextnum,a%i);
}
		
}

main()
{
	int k=1,product=1;
	while(k<=1000000)
	{
		product*=find(k);
		k*=10;
	}
	printf("%d",product);
}
