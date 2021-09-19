#include <stdio.h>
#include <string.h>
 
int main()
{
	int  n;
	printf("enter a string size ");
	scanf("%d",&n);
  	char str[n], ch;
  	int i, Flag;
  	Flag = 0;
 
  	printf("\n Please Enter any String :  ");
  	scanf("%s",str);
  	ch='s';
  	
  		for(i = 0; i <= strlen(str); i++)
  	     {
  		    if(str[i] == ch)  
		      {
  			    Flag++;
			      break;    	
 		      }
        }
    if(Flag == 0)
  	{
  		printf(" no search  element found  '%c' ", ch);
	}
	else
	{
		printf("search element found '%c' is at Position %d ", ch, i + 1);
	}	
  	return 0;
}
