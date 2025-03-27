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

    // Finding the first peak element
    for (int i = 0; i < n; i++) {
        // Checking if the current element is a peak
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            printf("%d\n", arr[i]);
            return 0; // Stop after finding the first peak
        }
    }

    // If no peak element is found
    printf("-1");
    
    return 0;
}
