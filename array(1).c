#include<stdio.h>  
int  main ()  
{  
    int i, j,temp =0;
	int n;
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    
    
        for(i = 0; i<n; i++)  
      {  
        for(j = i+1; j<n; j++)  
        {  
            if(a[i] > a[j])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   
        }   
    }   
    printf("Printing Sorted Element List ...\n");  
    for(i = 0; i<n; i++)  
    {  
        printf("%d\n",a[i]); 
		
    }  
    printf(" \n ");
    for(i=n-2;i<n;i++)
    {
    	
    	printf("%d\n",a[i]);
    	break;
    	
	}
}
