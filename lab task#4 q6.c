#include<stdio.h>
int main()
{
	int g;
	printf("enter your marks");
	scanf("%d", &g);
	if(g>=90)
	{
		printf("the grade is=A");
	}
	else if(g>=80&&g<=90)
	{
		printf("the grade is=B");
	}
	else if(g>=70&&g<=80)
	{
		printf("the grade is=C");
	}
	else if(g>=60&&g<=70)
	{
		printf("the grade is=D");
	}
	else if(g<60)
    {
    	printf("the grade is=F");
	}
	else
	{
		printf("the marks are invalid");
	}
	return 0;
}