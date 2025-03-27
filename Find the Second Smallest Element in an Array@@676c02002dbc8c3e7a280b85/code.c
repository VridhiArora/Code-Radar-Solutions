#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: If there is only one element
    if (n < 2) {
        printf("No second smallest number\n");
        return 0;
    }

    // Initialize smallest and second smallest
    int smallest = arr[0], secondSmallest = 1000000; // Large number to start

    // Find the smallest element first
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Find the second smallest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    // If second smallest is unchanged, all numbers are the same
    if (secondSmallest == 1000000) {
        printf("-1");
    } else {
        printf("%d\n", secondSmallest);
    }

    return 0;
}
