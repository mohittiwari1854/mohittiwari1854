#include <stdio.h>

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }

    int largest = arr[0], secondLargest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, size);

    return 0;
}