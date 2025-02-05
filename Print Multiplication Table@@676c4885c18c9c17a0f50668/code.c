 #include <stdio.h>

 int main() {
     int n, i = 1;
    
//     // Taking input from the user
//     printf("ENTER THE NO: ");
     scanf("%d", &n);  // Corrected scanf

//     // Printing the multiplication table
     while (i <= 10) {
         printf("%d * %d = %d\n", n, i, n * i);  // Correct format for printf
         i++;  // Incrementing i
     }
    
     return 0;
 }