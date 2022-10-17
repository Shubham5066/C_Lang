#include<stdio.h>
void main()
{
	int j,i,num,arr[50],a;
	printf("how many number you want enter=");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nenter a number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("\nnum=%d",arr[i]);
	}
	printf("\n enter which number you want to put insted of");
	scanf("%d",&a);
	for(i=0;i<num;i++)
	{
	if(arr[i]==a)
	{
	
		for(j=i;j<num;j++)
		
			arr[j]=arr[j+1];
			i--;
			num--;
		
	}
	}
	for(i=0;i<num;i++)
	{
		printf("\n%d",arr[i]);
	}

}
