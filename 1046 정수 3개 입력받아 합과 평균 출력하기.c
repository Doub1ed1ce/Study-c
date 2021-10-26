#include <stdio.h>

int main()
{
	long long int a, b, c;
	float x;
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n",a+b+c);
	x = a+b+c;
	printf("%.1f",(x)/3);
	
	return 0;
}
