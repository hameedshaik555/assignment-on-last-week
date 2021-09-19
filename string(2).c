#include<stdio.h>
 int  main()
 {
 

    printf("size of string");
     int n; 
    scanf("%d",&n);
    char s1[n],s2[n];  
    int i;
 
    printf("Enter any string: ");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)  //  or  for(i=0;s1[i];i++)
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';
 
    printf("%s\n",s1);
    printf("%s",s2);
 
 
    return 0;
}
