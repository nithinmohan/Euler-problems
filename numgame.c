#include<stdio.h>
int main()
{
 long long int n,num,i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&num);
		if(num%2)
		printf("BOB");
		else
		printf("ALICE");
	}
	return 0;
}
