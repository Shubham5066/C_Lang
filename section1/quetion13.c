#include<stdio.h>
void main()
{
	int i,n,k,sum;
	printf("enter a digit =");
	scanf("%d",&n);
       k=n%10;	
	  for(i=0;i<k;i++)
	  {
               sum=sum+i;
	  }
	  printf("\n sum=%d",sum);
	}
