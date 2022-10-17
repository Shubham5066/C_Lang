#include<stdio.h>
void main()
{
	
	int i,j,k,l,ans,mat[2][2], mtt[2][2];
	char n;
	printf("+ or - or +");
	scanf("%c",&n);
	switch(n)
	{
		case '+':
	printf("ENTER MATRICES MAT=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
			scanf("%d",&mat[i][j]);
		}
	}
	printf("MATRICES ELEMENTS=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
		
	printf("\n ENTER MATRICES MTT=");
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
	               
			scanf("%d",&mtt[k][l]);
		}
		
	}
	printf("MATRICES ELEMENTS=\n");
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d",mtt[k][l]);
		}
		printf("\n");
	}
        ans=mat[i][j]+mtt[k][l];
		printf("\nSUM OF TWO MATRICES IS=%d",ans);

		break;
		case '-':
		ans=mat[i][j]-mtt[k][l];
		printf("SUB OF TWO MATRICES IS=%d",ans);
		break;
		case '*':
		ans=mat[i][j]*mtt[k][l];
		printf("MUL OF TWO MATRICES=%d",ans);
		break;
		default:
		printf("this operator is not present in that");
	}

	}

