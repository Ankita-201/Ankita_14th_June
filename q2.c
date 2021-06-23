#include<stdio.h>
#include<stdlib.h>

int main()
{
	float X,Y,Z,T,W,daily_exp,monthly_exp;
	int month,year;
	int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the value for X, Y, Z, T, W, Month and Year respectively : ");
	scanf("%f",&X);
	scanf("%f",&Y);
	scanf("%f",&Z);
	scanf("%f",&T);
	scanf("%f",&W);
	scanf("%d",&month);
	scanf("%d",&year);
	if(year%4==0)
	{
		month_days[1]=29;
	}
	if(Y>X && Y>Z && Y>T && Y>W && 0<month && month<=12 && year>0)
	{
		daily_exp=X+Y+Z+T+W;
		monthly_exp=daily_exp*month_days[month-1];
		printf("\nDaily expenses and Monthly expenses are respectively : \n");
		printf("%f  %f\n",daily_exp,monthly_exp);
	}
	else
	printf("\nError\n");
	return 0;
}
