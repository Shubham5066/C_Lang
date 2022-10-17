#include<stdio.h>
#include<string.h>
struct day
{
	int hrs,min,sec;
}a;
void main()
{
	
	printf("enter a hrs=");
	scanf("%d",&a.hrs);
	printf("\nenter a min=");
	scanf("%d",&a.min);
	printf("\nenter a sec=");
	scanf("%d",&a.sec);
	printf("%d:%d:%d",a.hrs,a.min,a.sec);
	
	
}
