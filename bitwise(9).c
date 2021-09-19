#include <stdio.h>



int trailing_zeros(int n) {

	int count = 0;
	while (n > 0 && (n & 1) == 0) {

		count = count + 1;	
		n = n >> 1; 	

	}

	return count;

}

int main() {

	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	printf("Number of trailing zeros in %d = %d", n, trailing_zeros(n));

}

