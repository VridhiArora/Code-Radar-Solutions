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

    // Find first repeating element
    for (int i = 0; i < n - 1; i++) {  
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] == arr[j]) {  // Found first duplicate
                printf("%d\n", arr[i]);
                return 0;  // Exit after finding the first repeating element
            }
        }
    }

    // If no duplicate found
    printf("No Repeating Element\n");
    return 0;
}
