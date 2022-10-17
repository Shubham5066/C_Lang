#include<stdio.h>
void main()
{
	int a,n,i,arr[3];
	for(i=0;i<3;i++)
	{
	     printf("enters value=");
	     scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("\n%d",arr[0]);
	printf("\n%d",arr[1]);
	printf("\n%d",arr[2]);
	
	if(arr[0]>arr[1])
		{
			 if(arr[0]>arr[2])
			{
				printf("\ngreater value is the=%d",arr[0]);
			
			}
			 else
			 {
				 printf("\ngreater value is the=%d",arr[2]);
			 }
		}
		else
		{
			if(arr[1]>arr[2])
			{
				printf("\ngreater value is the=%d",arr[1]);
			}
			else
			{
				printf("\ngreater value is the=%d",arr[2]);
			}

		
	}
	

	
}

