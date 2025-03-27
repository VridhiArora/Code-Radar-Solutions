// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], rev[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        rev[n - i - 1] = arr[i]; // Reverse the array while taking input
    }

    // Compare the original and reversed array
    int isPalindrome = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
