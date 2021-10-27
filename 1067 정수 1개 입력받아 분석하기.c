#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(a>=0)
	{
		if(a%2==0)
		{
			printf("%s\n%s","plus","even");
		}
		else
		{
			printf("%s\n%s","plus","odd");
		}
	}
	else
	{
		if(a%2==0)
		{
			printf("%s\n%s","minus","even");
		}
		else
		{
			printf("%s\n%s","minus","odd");
		}
	}
	
	return 0;
}
