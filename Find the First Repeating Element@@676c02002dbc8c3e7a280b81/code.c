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
        for (int j = i + 1; j < n; j++){

        
        if (arr[i] == arr[j]) {  
            printf("%d",arr[i]);
            return 0;  
        }
    }
    }
    printf("-1");
    
}
