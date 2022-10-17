#include<stdio.h>
long findncr(int ,int );
long factorial(int );
long findnpr(int ,int );
long findncr(int n,int r)
{
 long result;
	result=factorial(n)/(factorial(r)*factorial(n-r));
	return result;
}
long findnpr(int n,int r)
{
   long result;
	result=factorial(n)/factorial(n-r);
	return result;
}
long factorial(int n)
{
 int c;
 long result=1;
	for(c=1;c<=n;c++)
	{
		result=result*c;
	}
	return result;
}
int main()
{
	int n,r;
	long ncr,npr;
	printf("enter the value of n and r\n");
	scanf("%d%d",&n,&r);
	ncr=findncr(n,r);
	npr=findnpr(n,r);
	printf("%dc%d= %ld\n",n,r,ncr);
	printf("%dp%d=%ld\n",n,r,npr);
}
