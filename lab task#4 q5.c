#include<stdio.h>
int main()
{
	int year;
	printf("enter year to check if it is leap or not=");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("the year is leap");
	}
    else if(year%4==0&&year%100!=0)
    {
    	printf("the year is leap");
	}
	else
	{
		printf("the year is not leap ");
	}
	return 0;
}