#include <stdio.h>

 int main() 
 {

    int i, j,n;
   
     scanf(" %d",&n);
    
    

    for (i = 1; i <= n; i++) {  // Controls the number of rows
        for (j = 1; j <= i; j++) {  // Prints numbers from 1 to i
            printf("%c", 'A');
        }
        printf("\n");  // Moves to the next line
     }

     return 0;
 }