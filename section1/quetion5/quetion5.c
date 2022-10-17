#include<stdio.h>
void main()
{
	int a,i,k=0;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		
		if(i%2!=0)
		{
		
			k=k+i;
		}
	}

		
		
	
   printf("\n sum of odd numbers=%d",k);
	}


