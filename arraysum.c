#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    // Taking input for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n
    
    // Taking input for the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Adding each element to sum
    }
    
    // Displaying the sum of the elements
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}