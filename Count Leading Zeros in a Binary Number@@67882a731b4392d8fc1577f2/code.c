// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    
    // Taking input
    scanf("%u", &num);
    
    // If the number is 0, all 32 bits are 0, so leading zeros are 32.
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    int count = 0;
    
    // Iterate from the leftmost bit
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)  // Check if the bit is set
            break;
        count++;
    }
    
    // Print the number of leading zeros
    printf("%d\n", count);

    return 0;
}
