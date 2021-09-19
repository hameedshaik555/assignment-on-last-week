#include<stdio.h>  
int  main ()  
{  
    int i, j;
	int n;
	scanf("%d",&n);
	int a[n]; int a1[n];
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	a1[i] =a[i];
    	
	}
	
	
	for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
    	printf("before copy");
    	
	}
	for(i=0;i<n;i++)
    {
    	
    	printf("%d\n",a1[i]);
    	printf("after copy");
	}
	
}
