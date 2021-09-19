#include<stdio.h>

int main()
{
 int Size, i, arr1[10], arr2[10], temp;
 int *ptr1=arr1;
 int *ptr2=arr2;
  
 printf("\nPlease Enter the Size of the Array\n");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the First Array Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", ptr1+i);
  }
   
 printf("\nPlease Enter the Second Array Elements\n");
 for(i = 0; i < Size; i ++)
  {
      scanf("%d", ptr2+i);
  }

 //Swapping two Arrays 
 for(i = 0; i < Size; i++)
  {
    temp = *(ptr1 + i);
    *(ptr1 + i)= *(ptr2 + i);
   *(ptr2+i)=temp;
    
  }

 printf("after swaping 1 arr1");
 for(i = 0; i < Size; i ++)
  {
      printf(" %d \t ",*(ptr1+i));
  }
  printf("after swaping 2 arr2");
 for(i = 0; i < Size; i ++)
  {
      printf(" %d \t ",*(ptr2+i));
  }
  

  return 0;
} 
