#include<stdio.h>
void main()
{
	char j;
	printf("enter a char =");
	scanf("%c",&j);
	switch(j)
	{
		case 'a':
			printf("\nApple");
	        break;
		case 'b':
		printf("\nBat");
		break;
		case 'A':
		printf("\nApple");
		break;
		case 'B':
		printf("\nBat");
		case 'c':
		printf("\nCat");
		break;
		case 'C':
		printf("\nCat");
		break;
		case 'f':
		printf("\nFan");
		break;
		case 'F':
		printf("\nFan");
		break;
		default:
		printf("error");
}
}

