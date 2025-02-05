 #include <stdio.h>

 int main() 
 {

    int i, j,n;
     printf("Enter the no.: ");
     scanf(" %d",&n);
    
    

    for (i = 1; i <= n; i++) {  // Controls the number of rows
        for (j = n; j <= i; j--) {  // Prints numbers from 1 to i
            printf("%c", '*');
        }
        printf("\n");  // Moves to the next line
     }

     return 0;
 }