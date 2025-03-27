// Your code here...
#include <stdio.h>

// Function to check if a number is a palindrome
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }
    
    for (int i = 2; i * i <= num; i++) {  // Efficient check up to sqrt(num)
        if (num % i == 0) {
            return 0; // Not a prime
        }
    }
    
    return 1; // Prime number
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the number is a palindrome
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Print the count of palindrome numbers
    printf("%d\n", count);

    return 0;
}
