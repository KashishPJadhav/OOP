#include<stdio.h>
int main()
{
	int d1,m1,y1,d2,m2,y2;
	printf("\nenter date : ");
	printf("\nDate : ");
	scanf("%d",&d1);
	printf("\tMonth : ");
	scanf("%d",&m1);
	printf("\tYear : ");
	scanf("%d",&y1);
	printf("\nenter date : ");
	printf("\nDate : ");
	scanf("%d",&d2);
	printf("\tMonth : ");
	scanf("%d",&m2);
	printf("\tYear : ");
	scanf("%d",&y2);
	int d,m,y;
	if(y1==y2)
	{
		y=0;
		if(m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
		{
			if(m1==m2)
			{
				d=d2-d1;
			}
			else
			{
			    m=m2-m1;
			    if(m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12)
			    {
			    	d=((m-1)*31)+(31-d1)+(31-d2);
				}
				else
				{
					d=((m-2)*31)+(31-d1)+(30-d2);	
				}
			}
		}
		else
		{
				if(m1==m2)
			{
				d=d2-d1;
			}
			else
			{
			    m=m2-m1;
			    if(m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12)
			    {
			    	d=((m-2)*30)+(30-d1)+(31-d2);
				}
				else
				{
					d=((m-2)*30)+(30-d1)+(30-d2);	
				}
			}
		}
	}
	
	
	
	
	printf("%d years %d months %d days",y,m,d);
	
}
