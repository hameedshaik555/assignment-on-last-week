#include<stdio.h>  
int  main ()  
{  
    int i, j,count=0;
	int n;
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	if(a[i]<0)
    	{
    		count++;
		}
	}
	printf("%d",count);
}
