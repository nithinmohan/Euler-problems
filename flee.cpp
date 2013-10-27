#include<stdio.h>
int main()
{
	int c,n,m,t;
	int op;
	scanf("%d",&c);
 	while(c--)
	{
	 		  scanf("%d",&n);
 			  scanf("%d",&m);
  	   		  scanf("%d",&t);
			  op=(n%m==0)?(n/m)*(2*t):((n/m)+1)*(2*t);
			  printf("%d\n",op);
	}
	return 0;
	
}
