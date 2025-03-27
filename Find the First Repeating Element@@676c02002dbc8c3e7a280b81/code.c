// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    for (int i = 0; i < n ; i++) {  
        if (arr[i] == arr[i + 1]) {  // Only check if it decreases
            printf("%d",arr[i]);
            return 0;  
        }
    }

    
}
