#include<stdio.h>
int findmax(int a[20][20],int i,int j)
{
	int max=0,p;
	if(j<17)
	p=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
	if(p>max)
	max=p;
	if(i<17&&j<17)
	p=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
	if(p>max)
	max=p;
	if(i<17)
	p=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
	if(p>max)
	max=p;
	if(i<17&&j>2)
	p=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
	if(p>max)
	max=p;
	if(j>2)
	p=a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3];
	if(p>max)
	max=p;
	if(j>2&&i>2)
	p=a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3];
	if(p>max)
	max=p;
	if(i>2)
	p=a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j];
	if(p>max)
	max=p;
	if(i>2&&j<17)
	p=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
	if(p>max)
	max=p;
	return max;
}
main()
{
	int a[20][20];
	int i,j;
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		scanf("%d",&a[i][j]);
	}
	int max=0,p;
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
		p=findmax(a,i,j);
		if(p>max)
		max=p;
	}
	}
	printf("%d",max);
}
