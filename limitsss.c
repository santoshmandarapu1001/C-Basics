#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned:%d to %hu\n",0,USHRT_MAX);
	printf("long int:\nsinged:%ld to %lu\n",LONG_MIN,LONG_MAX);
	printf("unsinged:%u to %lu\n",0,ULONG_MAX);
	printf("int:\nsinged:%d to %u\n",INT_MIN,INT_MAX);
	printf("unsigned:%uto %u\n",0,UINT_MAX);
	printf("long long int:\nsinged:%lld to %llu\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned:%llu to %llu",0,ULONG_LONG_MAX);
}





