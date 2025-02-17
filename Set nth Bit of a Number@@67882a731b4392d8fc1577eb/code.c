// Your code here...
#include <stdio.h>

int main() {
    int num, pos;
    
    // Taking input
    scanf("%d %d", &num, &pos);
    
    // Setting the nth bit using bitwise OR
    int result = num | (1 << pos);
    
    // Printing the updated number
    printf("%d\n", result);
    
    return 0;
}
