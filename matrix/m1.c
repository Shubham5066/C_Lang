#include<stdio.h>

void main()
{
        int a[3][3],b[3][3],c[3][3];
        int i,j;
	char ch;
	printf("\nchar=");
       scanf("%c",&ch);
        printf("\n%c",ch);

        printf("first matrix=");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)

                        scanf("%d",&a[i][j]);
        }
	printf("\nsecond matrix=");
        for(i=0;i<3;i++)
        {
                for(j=0;j<3;j++)
                        scanf("%d",&b[i][j]);
        }
	printf("\nafter operation");

	switch(ch)
	{
	case'+':
               for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                        c[i][j]=a[i][j]+b[i][j];
                        printf("%d ",c[i][j]);
		}
		printf("\n");
	  }
 	break;
	case'-':
               for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                        printf("%d ",c[i][j]);
                }
                printf("\n");
		}
	break;
	case'*':
               for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                        c[i][j]=a[i][j]*b[i][j];
                        printf("%d ",c[i][j]);
                }
                printf("\n");
		}
	case'/':
               for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                        c[i][j]=a[i][j]/b[i][j];
                        printf("%d ",c[i][j]);
                }
                printf("\n");
            }
	break;
}

}
