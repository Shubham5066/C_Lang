#include<stdio.h>
void main()
{
    char *color[6]={"red","green","blue","white","black","yellow"};
     printf("\ncolor=%p",color);
	printf("\ncolor+2=%p",color+2);
	printf("\n*color=%s",*color);
	printf("\n*(color+2)=%s",*(color+2));
	printf("\ncolor[5]=%p",color[5]);
	printf("\n*(color+5)=%s",*(color+5));
}
