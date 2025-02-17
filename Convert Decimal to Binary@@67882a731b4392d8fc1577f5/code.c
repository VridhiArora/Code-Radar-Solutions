// Your code here...
#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Taking input from user
   
    scanf("%d", &num);

    // Edge case for 0
    if (num == 0) {
        printf(" 0\n");
        return 0;
    }

    // Converting decimal to binary
    while (num > 0) {
        binary[i] = num % 2; // Store remainder (0 or 1)
        num = num / 2;       // Divide by 2
        i++;
    }

    // Printing binary in reverse order
 
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
