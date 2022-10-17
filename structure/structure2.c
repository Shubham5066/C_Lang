#include<stdio.h>
struct m
{
	int a;
	char b;
}m1;

union s
{
	int c;
	char d;
}s1;

void main()
{
	int size,size1;
	size=sizeof(m1);
	size1=sizeof(s1);
	printf("\nsize of structure=%d",size);
	printf("\nsize of union=%d",size1);
	
	
}
