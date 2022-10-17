#include<stdio.h>
void main()
{
	int i,j;
	printf("enter the value of i and j");
	scanf("%d %d",&i,&j);
	printf("%d\t%d",i,j);
	if(i<=20 && j<=20)
	{
		printf("\nBOTH NE VALUES UNDER THE 20");
	}
	else if(i<=20||j<=20)
	{
		printf("\nANY ONE VALUE IS ONLY UNDER THE 20");
	}
	else if(i<=40&&j<=40)
	{
		printf("\nBOTH VALUES UNDER THE 40");
	}
	else
         {
		 printf("\nBOTH VALUES IS GREATER THAN 20 AND 40");
	 }

}
