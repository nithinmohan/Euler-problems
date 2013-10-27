#include<stdio.h>
#include<string.h>
int main()
{
	int notestcase,n,k,answer;
	char operator1[4];
	long long a[2000],answers[1000];
	scanf("%d",&notestcase);
	int l=notestcase;
	int i=0,j=0,t=0;
	while(notestcase--)
	{
	
		scanf("%d",&n);
		scanf("%d",&k);
		scanf("%d",&answer);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		scanf("%s",operator1);
		if(!strcmp(operator1,"XOR"))
		{
  			if(k%2==1)
  			{
  				 for(i=0;i<n;i++)
				 	 {
					 	 answer=answer^a[i];		
					}
  			
  			}
  		
		
		}
		else	if(!strcmp(operator1,"OR"))
		{
  		 for(i=0;i<n;i++)
		 {
			 answer=answer|a[i];		
		}
	}
		else if(!strcmp(operator1,"AND"))
		{
  		 for(i=0;i<n;i++)
		 {
			 answer=answer&a[i];		
		}
	}
	else 
	continue;
		answers[t]=answer;
		t++;
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",answers[i]);
	}
	return 0;
}
