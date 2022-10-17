#include<stdio.h>
void main()
{
	char k;
	printf("\n ENTER A CHAR=");
	scanf("%c",&k);
	
	if(k=='A'||k=='a')
	{
		printf("\n Apple");
	}
	else if(k=='B'||k=='b')
	{
		printf("\n Ball");
	}
	else if(k=='C'||k=='c')
	{
		printf("\nCat");
	}
	else if(k=='D'||k=='d')
	{
		printf("\nDog");
	}
	else if(k=='F'||k=='f')
	{
		printf("\nFan");
	}

	else
	{
		printf("\n its wrong char");
	}
}
