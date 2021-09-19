#include <stdio.h>
#include <string.h>
 
int main()
{
	int  n;
	printf("enter a string size ");
	scanf("%d",&n);
  	char str[n], ch;
  	int i, count;
  	count = 0;
 
  	printf("\n Please Enter any String :  ");
  	scanf("%s",str);
  	ch='s';
  	
  		for(i = 0; i <= strlen(str); i++)
  	     {
  		    if(str[i] == ch)  
		      {
  			    count++;
			     	
 		      }
        }
    if(count == 0)
  	{
  		printf(" no   character  found  '%c' ", ch);
	}
	else
	{
		printf("count the  occurance  of a character '%c'  %d ", ch, count);
	}	
  	return 0;
}
