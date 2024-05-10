#include<stdio.h>
int main()
{
	int  i,month;
	double saving,rate,b;     
	scanf("%lf,%lf,%d",&saving,&rate,&month);
	b=saving;
	for(i=1;i<=month;i++)
	{
		saving=saving*(1+rate/12);
		saving+=b;
	}
	saving-=b;
	printf("%.2lf",saving);
	return 0;
} 

