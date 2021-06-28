#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,egg,l,i,j,m;
	l=1;
	egg=0;
	printf("Enter the number of swans : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error\n");
	}
	else
	{
		while(l<=n)
		{
			printf("Enter the age of the swan %d in weeks : ",l);
			scanf("%d",&a);
			if(a<=0)
			{
				printf("Error\n");
				exit(0);
			}
			else
			{
				for(i=0;i<4;i++)
				{
					m=a/4;
					if(m>=13)
					{
						egg=egg+4;
					}
					else
					{
						a=a+1;
					}
				}
			}
			l=l+1;
		}
		printf("\nTotal number of eggs at the end of the month is : %d\n",egg);
	}
}
