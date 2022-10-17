#include<stdio.h>
void main()
{
	int a,n,coun=0,i,b,s=0,j,add;
	printf("enter a number=");
	scanf("%d",&a);
	while(a!=0)
	{
		i=(a&1);
		if(i)
		coun++;
		a=a>>1;
	}
	printf("\nwhich number you want to put");
	scanf("%d",&b);
	while(b!=0)
	{
		j=(b&1);
			if(i)
				s++;
		b=b>>1;
	}
	add=s+coun;
	printf("the final ans=%d",add);

}

