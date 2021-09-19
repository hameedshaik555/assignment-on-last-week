
#include <stdio.h>
#include <string.h>
 
int main()
{
	printf("enter size");
	int n;
	scanf("%d",&n);
    char s[n];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count+1);
}
