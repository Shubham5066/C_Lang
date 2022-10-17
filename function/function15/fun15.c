#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int div(int a,int b)
{
	return (float)a/b;
}
int mul(int a,int b)
{
	return a*b;
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	char k;
	int a,b,n;
	printf("enter the choice:");
	scanf("%c",&k);
	switch(k)
	{
		case'+':printf("enter a,b:");
		scanf("%d %d",&a,&b);
	    	int sum=add(a,b);
		printf("sum=%d",sum);
		break;
		case'-':printf("enter a,b:");
                scanf("%d %d",&a,&b);
                int s=sub(a,b);
                printf("sub=%d",s);
                break;
		case'*':printf("enter a,b:");
                scanf("%d %d",&a,&b);
                int m=mul(a,b);
                printf("mul=%d",m);
                break;
		case'/':printf("enter a,b:");
                scanf("%d %d",&a,&b);
                int d=div(a,b);
                printf("div=%d",d);
                break;
		default:
		printf("\nthat choice is not in that list=");
		break;
	}

}
