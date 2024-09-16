#include<stdio.h>
int main()
{
	int i;
	float t,it;
	printf("enter your income=");
	scanf("%d", &i);
	if(i>=0&&i<250000)
	{
	    it=i;
		printf("there is no tax");
	    printf("the total income is=%f", it);
	}
	else if(i>=250001&&i<500000)
	{
		printf("the tax is = 5%");
		it=(i*0.95);
		printf("\n the total income is=%f", it);
	}
	else if(i>=500001&&i<1000000)
	{
		printf("the tax is=20%");
		it=(i*0.80);
		printf("\n the total income after tax is =%f", it);
	}
	else if(i>1000000)
	{
	
		printf("the tax is=30%");
		it=(i*0.70);
		printf("\nthe total income after tax is=%f",it);
	}
	else
	{
		printf("\n input is invalid, try again");
	}
	
}