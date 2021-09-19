
int main()
{
 int n, i, arr1[10];
 int *ptr1=arr1;
  
 printf("\nPlease Enter the Size of the Array\n");
 scanf("%d", &n);
 
 printf("\nPlease Enter the First Array Elements\n");
 for(i = 0; i <n; i++)
  {
      scanf("%d", ptr1+i);
  }
   
 for(i = n-1; i>=0; i--)
  {
      printf(" %d \t ",*(ptr1+i));
  }

  

  return 0;
} 
