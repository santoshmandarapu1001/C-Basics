#include<stdio.h>
void main()
{
	int a , b , c , d , e , f , g , h;
	
	a = 20;
	b = 10;
	c = a>b;
	d = a>=b;
	e = a<b;
	f = a<=b;
	g = a==b;
	h = a!=b;
	
	printf("a = %d",a);
	printf("b = %d",b);
	
	printf("%d > %d --> %d\n", a , b, a>b );
	printf("%d >= %d --> %d\n",a , b , a>=b );
	printf("%d < %d --> %d\n", a , b , a<b);
	printf("%d <= %d --> %d\n",a , b, a<=b);
	printf("%d == %d --> %d\n",a , b , a==b);
	printf("%d != %d --> %d",a , b , a!=b);
}
