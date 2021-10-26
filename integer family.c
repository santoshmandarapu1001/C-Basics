#include<stdio.h>
void main ()
{
	short int a;
	int b;
	long int c;
	long long int d;
	
	a = -32768, b = -2147483648, c = -2147483648, d = -9223372036854775808;
	
	printf("a = %hd\n",a);
	printf("b = %d\n",b);
	printf("c = %ld\n",c);
	printf("d = %lld",d);
}
