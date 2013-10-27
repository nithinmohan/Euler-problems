#include<stdio.h>
int max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		return a;
		else return c;
	}
	else
	{
	
		if(b>c)
		return b;
		else return c;
	}
}
main()
{
	int ct,cp,ch,ti,pi,hi,tn=1,pn=3,hn=4;
	ct=1;
	cp=5;
	ch=6;
	ti=2;
	pi=7;
	hi=9;
	int curmax;
	int nth=2;
	while(nth!=0)
	{
		curmax=max(cp,ct,ch);
		while(ct<curmax)
		{
			ct+=ti;
			ti+=tn;
		}
		while(cp<curmax)
		{
			cp+=pi;
			pi+=pn;
		}
	
	while(ch<curmax)
		{
			ch+=hi;
			hi+=hn;
		}
		if(ct==cp&&cp==ch){
			ct+=ti;
			ti+=tn;
				cp+=pi;
			pi+=pn;
			ch+=hi;
			hi+=hn;
			nth--;
		}
		
	}
	printf("%d",ct-(ti-tn));
	
}
