// Your code here...
#include <stdio.h>

int main() {
    int num, pos = 0;
    
    // Taking input
    scanf("%d", &num);
    
    // Finding the lowest set bit position
    while ((num & 1) == 0) {
        num >>= 1;  // Right shift
        pos++;
    }
    
    // Printing the position (0-based index)
    printf("%d\n", pos);
    
    return 0;
}
