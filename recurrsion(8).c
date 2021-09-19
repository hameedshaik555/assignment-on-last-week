#include<stdio.h>
int factorialnumber(int n);
int main() {
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    printf(" %d", factorialnumber(n));
    return 0;
}

int factorialnumber(int n) {
    if (n>=1)
        return n*factorialnumber(n-1);
    else
        return 1;
}
