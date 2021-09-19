include<stdio.h>

int reverse(int , int );

int main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    
    result = reverse(number, 0);

    printf("Reverse of %d is %d.", number, result);
    
         if(number == result)
         {
        	printf("its a palindrome ");
        }
    	
    	else
    	{
    		printf(" its a not a palindrome");
		}
	
}

int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return reverse (num/10, rev*10 + num%10);
}
