#include <stdio.h>
int main() {
    int p[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", p + i); //  &p[i] = p+i;

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(p+ i));
    return 0;
}
