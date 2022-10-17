#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter a Number=");
	scanf("%d",&n);
        while(n!=0)
	{
		i=(n&1);
			if(i)
				count++;
		n=n>>1;
	}
	printf("THIS NUMBER IS GIVING 1 NO OF BITS=%d ",count);
}
