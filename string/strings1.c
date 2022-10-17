#include<stdio.h>
void rev(char*s)
{
        if(*s)
        {
        rev(s+1);
        printf("%c",*s);
        }

}
int main()
{

        char a[20];
	gets(a);

        rev(a);
        return 0;

} 
