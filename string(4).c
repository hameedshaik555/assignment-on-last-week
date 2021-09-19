#include<stdio.h>
main()
{
       printf("enter size");
       int n;
       scanf("%d",&n);
       char s1[n],s2[n];
       int i,temp = 0;

       printf("Enter the string1 value: ");
       scanf("%s",s1);

       printf(" Enter the String2 value: ");
       scanf("%s",s2);
       for(i=0; s1[i]!='\0'; i++)
       {
              if(s1[i] == s2[i])
              temp = 1;
              else
              temp = 0;
       }

       if(temp == 1)
       printf("Both strings are same.");
 
       else
 
       printf("Both string not same.");

}  
