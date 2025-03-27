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
        printf("-1");
        return 0;
    }

    // Initialize largest and second largest
    int largest = arr[0], sec = -1;

    // Finding largest and second largest
    for (int i = 1; i < n; i++) { 
        if (arr[i] > largest) {
            sec = largest;
            largest = arr[i];
        } else if (arr[i] > sec && arr[i] < largest) {
            sec = arr[i];
        }
    }

    // If second largest is still -1, it means all elements were the same
    if (sec == -1) {
        printf("-1");
    } else {
        printf("%d\n", sec);
    }

    return 0;
}
