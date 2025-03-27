#include <stdio.h>

int main() {
    int n;

    // Taking the number of elements
    
    scanf("%d", &n);

    int arr[n];

    // Taking input for the array
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the largest and second largest number
    int largest = arr[0], secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Printing the second largest number
    printf("%d\n", secondLargest);

    return 0;
}
