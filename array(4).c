#include<stdio.h>
int main()
{
	int n;
    scanf("%d",&n);
int arr[n];
for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int count_odd =0, count_even = 0;
for(int i = 0; i < n; i++)
{
if(arr[i] % 2 == 1)
count_odd++;
else
count_even++;
}
	 
	 printf(" even numbers %d\n",count_even );
	  printf(" odd numbers %d",count_odd );
	
	
}


