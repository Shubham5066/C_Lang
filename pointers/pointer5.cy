#include<stdio.h>
#include<string.h>
int count;
void main()
{
    char *a;
    char* s[]={"we will teach you how to",
                   "Move a mountain",
               	"level a building",
		"erase the past",
		"make a million"
};
 
  int n=(sizeof s/sizeof(char *))-1;
  int j=0;
  
    	while(j<n)
       {
               a=s[j];
		for(int i=0;a[j]!='\0';i++)
                    {
                      if(a[i]=='e')
				{
					count++;
				}
				j++;
                     }
          
       }
		printf("\ntotal numbers of 'e'=%d",count);
}
