#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for majority element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // If count is greater than n/2, print the element and exit
        if (count > n / 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // No majority element found
    printf("-1\n");
    return 0;
}
