#include<stdio.h>
struct num
{
	int digit;
	struct num* next;
	struct num* prev;
};
struct num* allocate()
{
	struct num* node= (struct num*)(malloc(sizeof(struct num)));
	return node;
}
int findsum(struct num *head)
{
	int sum=0;
	while(head)
	{
	sum=sum+head->digit;
		head=head->next;
	};	
	return sum;
}
printlist(struct num *head)
{
	while(head)
	{
		printf("%d ",head->digit);
		head=head->next;
	};
}
mul(struct num *tail,int n,struct num **head)
{
	int carry=0,a,carrydigit;
	struct num *temp=tail;
	while(temp!=NULL)
	{ 
//	printf("%d_",temp->digit);
        a=temp->digit;
		temp->digit=((temp->digit)*n+carry)%10;
		carry=(a*n+carry)/10;
			
		temp=temp->prev;
	}
//	printlist(*head);
	//printf("\n*");
	
	while(carry)
	{
		carrydigit=carry%10;
		struct num * new=allocate();
			new->digit=carrydigit;
			new->prev=NULL;
			(*head)->prev=new;
			new->next=*head;
			*head=new;
			carry=carry/10;
	}
	
}
main()
{
	struct num *larnum=allocate();
	larnum->digit=1;
	larnum->next=NULL;
	larnum->prev=NULL;
	struct num *tail=larnum;
	struct num *head=larnum;
	int i=1,sum,j=1,max=0,a,b;
	for(i=1;i<=100;i++)
	{
		head->next=NULL;
		head->prev=NULL;
		head->digit=1;
		tail=head;
		for(j=1;j<=100;j++)
		{
	     mul(tail,i,&head);
  		 sum=findsum(head);
		 if(sum>max)
		 {
		 max=sum;
		 a=i;
		 b=j;
		 }
		 }
	}
	//mul10(&tail);
printf("%d %d %d",max,a,b);
//printlist(head);
}


