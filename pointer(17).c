#include <stdio.h>
void main()
{
   int *a,i,j,tmp,n;
   
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",a+i);
	  }   
   for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i+1,*(a+i));
	  }         
printf("\n");
}
