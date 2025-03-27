// Your code here...
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the number is a palindrome
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    // Print the count of palindrome numbers
    printf("%d\n", count);

    return 0;
}
