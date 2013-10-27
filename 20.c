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
	int i=1,sum;
	for(i=1;i<=100;i++)
	{
	mul(tail,i,&head);
	}
	//mul10(&tail);
 sum=findsum(head);
printf("%d",sum);
//printlist(head);
}

/*push(struct list **head, int value)
{
	struct list * new=allocate();
	new->num=value;
	if(*head==NULL)
	{
	*head=new;
	return;
	}
	struct list* temp=*head;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=new;
}*/


