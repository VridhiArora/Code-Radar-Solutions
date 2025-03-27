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

    // Check first repeating element
    for (int i = 0; i < n ; i++) {  
        if (arr[i] == arr[i + 1]) {  
            printf("%d",arr[i]);
            return 0;  
        }
    }

    
}
