#include<stdio.h>
void main()
{
	int a, b, c, d, p;
	
	
	printf("enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	p = a*b*c*d;
	
	printf("product of %d,%d,%d,%d is: %d", a, b, c, d, p);
	
}
