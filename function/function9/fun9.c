#include<stdio.h>
void transpose(int p[3][3],int t[3][3]);
void main()
{
	int i,j;
	int p[3][3],t[3][3];
	printf("print matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a matrix element %d:%d=",i,j);
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {

                        printf("%d",p[i][j]);
			printf("\n");
                }
		
        } transpose(p,t);	printf("transpose the matrix p is:\n\n");

	for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                {

                        printf("%d",t[i][j]);
			printf("\n");
                }
        }



}
void transpose(int p[3][3],int t[3][3])
{
	int row,col;
	for(row=0;row<3;row++)
		for(col=0;col<3;col++)
		{
			t[row][col]=p[col][row];
		}
}
