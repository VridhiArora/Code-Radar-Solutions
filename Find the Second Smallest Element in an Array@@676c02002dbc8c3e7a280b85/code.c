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

    // Initialize largest and second largest properly
    int largest = arr[0], sec = arr[i+1];

    // Find largest element first
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest
     // Set sec to a very small number
    for (int i = 0; i < n; i++) {
        if (arr[i] < sec && arr[i] > largest) {
            sec = arr[i];
        }
         printf("%d\n", sec);
    }

    // If second largest is unchanged, all numbers are the same
   
       
    }

    
