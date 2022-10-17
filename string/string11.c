#include<stdio.h>
#include<string.h>

void main()
{
   char str[100];
	int i,j;
	printf("\nEnter a string=");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{



		for(j=i;str[j]!=0;j++)
                printf("%c",str[j]);
  

                for(j=0;j<i;j++)
               printf("%c",str[j]);
		printf("\n");



	}
}
