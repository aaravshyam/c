#include <stdio.h>

void swap_array(int n, int a[n], int b[n]) {
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    int n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of array A:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of array B:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    swap_array(n, a, b);

    printf("After swapping:\nArray A: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nArray B: ");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}
