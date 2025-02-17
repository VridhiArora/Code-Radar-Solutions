// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    
    // Taking input
    scanf("%u", &num);
    
    // If number is 0, all bits are 0, so trailing zeros are 32.
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    int count = 0;

    // Count trailing zeros
    while ((num & 1) == 0) { // Check if LSB is 0
        count++;
        num >>= 1; // Right shift to check the next bit
    }

    // Print the number of trailing zeros
    printf("%d\n", count);

    return 0;
}
