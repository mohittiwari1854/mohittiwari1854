#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sumArr[n];
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements for the second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }
    printf("Sum of corresponding elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sumArr[i]);
    }

    printf("\n");

    return 0;
}