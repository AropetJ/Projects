#include <stdio.h>
#define N 5

int main(void) {
    int a[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Enter the value in address: %d\n", i);
        scanf("%d", &a[i]);
    }
    printf("\n The array elements are: \n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}