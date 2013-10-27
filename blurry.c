#include<stdio.h>
int a[10][10];
int main()
{
	int t,n,m,i,j;
	scanf("%d",&t);
	while(t--);
 	{
 		scanf("%d",&n);
 		scanf("%d",&m);
 		for(i=0;i<n;i++)
 		{
 			for(j=0;j<m;j++)
 			a[i][j]=getch();
 		}
 		for(i=0;i<n;i++)
 		{
 			for(j=0;j<m;j++)
 			printf("%c",a[i][j]);
 			printf("\n");
 		}
 	}
 	return 0;
}
