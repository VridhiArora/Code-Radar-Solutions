#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even = -100000000; // Initialize with a very small number

    // Find the largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // Check if even
            if (arr[i] > even) {
                even = arr[i];
            }
        }
    }

    // If `even` is unchanged, no even number exists
    if (even == -100000000) {
        printf("No even number\n");
    } else {
        printf("%d\n", even);
    }

    return 0;
}
