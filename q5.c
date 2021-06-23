#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,b_d,b_m,b_y,c_d,c_m,c_y,f_d,f_m,f_y,no_of_days,tot_days,tot_weeks,p_fact;
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter your birth date : ");
	scanf("%d",&b_d);
	printf("Enter your birth month(in number) : ");
	scanf("%d",&b_m);
	printf("Enter your birth year : ");
	scanf("%d",&b_y);
	printf("Enter current date : ");
	scanf("%d",&c_d);
	printf("Enter current month(in number) : ");
	scanf("%d",&c_m);
	printf("Enter current year : ");
	scanf("%d",&c_y);
	if(b_d>c_d) 
	{
    	c_d=c_d+month[b_m-1];
    	c_m=c_m-1;
    }
    if(b_m>c_m) 
	{
    	c_y=c_y-1;
    	c_m=c_m+12;
    }
   	f_d=c_d-b_d;
   	f_m=c_m-b_m;
   	f_y=c_y-b_y;
   	printf("\nPresent Age Years: %d   Months: %d   Days: %d\n", f_y,f_m,f_d);
	no_of_days=0;
	for(i=0;i<f_m;i++)
	{
		no_of_days=no_of_days+month[i];
	}
	tot_days=f_y*365+no_of_days+f_d;
	printf("\nTotal no. of days : %d",tot_days);
	tot_weeks=tot_days/7;
	printf("\nTotal no. of weeks : %d\n",tot_weeks);
	int fact=0;
	printf("Factors of %d are : ",tot_weeks);
	for(i=2;i<tot_weeks;i++)
	{
		if((tot_weeks%i)==0)
		printf(" %d ",i);
	}
	int p_sum=0;
	printf("\nPrime factors are : ");
	for(i=2;i<tot_weeks;i++)
	{
		if((tot_weeks%i)==0)
		{
			p_fact=1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    p_fact=0;
					break;
                }
            }
            if(p_fact==1)
            {
            	printf(" %d ",i);
				p_sum=p_sum+i;
			}
		}
	}
	int np_sum=0;
	printf("\nNon-Prime factors are : ");
	for(i=2;i<tot_weeks;i++)
	{
		if((tot_weeks%i)==0)
		{
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                	printf(" %d ",i);
                	np_sum=np_sum+i;
                	break;
                }
            }
        }
	}
	if(np_sum<p_sum)
	{
		printf("\n\nThis wil get Grant.\n");
	}
	else
	{
		printf("\n\nThis wil not get Grant.\n");
	}
	return 0;
}
