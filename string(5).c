
#include <stdio.h>
#include <string.h>
 
int main()
{    printf("enter a string");
     int n;
     scanf("%d",&n);
    char s[n]; 
    int i,alphabets=0,digits=0,specialcharacters=0;
 
    printf("Enter  the string : ");
    scanf("%s",s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         specialcharacters++;
 
 	}
 	
     
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
    
 
 
