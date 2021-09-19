#include <stdio.h>  
int main()  
{  int n;
    printf("size of string");
    scanf("%d",&n);
    char s1[n];
    char s2[n]; 
    int i;  
    printf("Enter the first string");  
    scanf("%s",s1);  
    printf("\nEnter the second string");  
    scanf("%s",s2);  
    for(i=0;s1[i]!='\0';i++);   
      
      
    for(int j=0;s2[j]!='\0';j++)  
    {  
        
        s1[i]=s2[j];  
        i++;  
    }  
    s1[i]='\0';  
   printf("After concatenation, the string would look like: %s", s1);
   
}
