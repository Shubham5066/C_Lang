#include<stdio.h>
#include<math.h>
void main()
{
	unsigned int d1,d2,m1,m2,y1,y2,d,m,y,f;
	printf("enter first date=");
	scanf("%d\t%d\t%d",&d1,&m1,&y1);
	printf("\nenter second date=");
	scanf("%d\t%d\t%d",&d2,&m2,&y2);
	d=(d1>d2)?(d1-d2):(d2-d1);
	m=(m1>m2)?(m1-m2):(m2-m1);
	y=(y1>y2)?(y1-y2):(y2-y1);
	f=((365*y)+((y/4)-(y/100))+(y/400)+d+((153*m+8)/5));
		printf("\nDays=%d",f);



}
