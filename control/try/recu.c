#include<stdio.h>
int recu(int n)
{
	
	if(n==1)
	{
		return 1;
	}
	else
	{
		return +recu(n-1);
	}
}
int main()
{
	int n=3;

	return 0;

}
