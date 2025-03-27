#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find leaders using a nested loop
    for (int i = 0; i < n; i++) {
        int isLeader = 1; // Assume arr[i] is a leader

        // Compare with all elements to its right
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { // If any right element is greater, not a leader
                isLeader = 0;
                break;
            }
        }

        if (isLeader) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
