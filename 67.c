#include<stdio.h>
int a[100][100];
int maxar[100][100];
max(int i,int j)
{
	if(i>j)
	return i;
	else return j;
}
maxsum(int i,int j)
{
	if(!maxar[i][j]&&i==99)
	maxar[i][j]=a[i][j];
	if(!maxar[i][j])
	maxar[i][j]=a[i][j]+max(maxsum(i+1,j),maxsum(i+1,j+1));
	return maxar[i][j];
}
main()
{
	int i=0,j=0;
	for(i=0;i<100;i++)
	{
		for(j=0;j<=i;j++)
		scanf("%d",&(a[i][j]));
	}
	printf("*%d*",maxsum(0,0));
}
