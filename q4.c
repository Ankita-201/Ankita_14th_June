#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,x,y,k,arr[10],count,p,q,P,Q;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	int l=1;
	if(n<=0)
	{
		printf("Error\n");
	}
	else
	{
		while(l<=n)
		{
			printf("\nEnter a number : ");
			scanf("%d",&x);
			count=0;
			y=x;
			while(y!=0)
			{
				y=y/10;
				count=count+1;
			}
			//printf("%d",count);	
			if(x<=0 || count>10)
			{
				printf("Error\n");
			}
			else
			{
				for(i=(count-1);i>=0;i--)
				{
					k=x%10;
					//printf("%d\n",k);
					arr[i]=k;
					x=x/10;
				}
				/*for(i=0;i<count;i++)
				{
					printf("%d",arr[i]);
				}*/
				p=1,q=1;	
				P=0,Q=0;
				for(i=0;i<count;i++)
				{
					if(i%2!=0)
					{
						p=p*arr[i];
						//printf("%d",i);
						P=p;	
					}
					else
					{
						q=q*arr[i];	
						//printf("%d",i);
						Q=q;
					}	
				}
				if(P>=Q)
				{
					printf("Dominant\n");
				}
				else
				{
					printf("Magical\n");
				}
			}
			l=l+1;
		}
	}
}
