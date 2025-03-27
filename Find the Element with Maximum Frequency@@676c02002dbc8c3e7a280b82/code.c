// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, maxNum;
    
    // Iterate through the array to find frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1; // Count occurrences of arr[i]

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update max frequency and number
        if (count > maxFreq) {
            maxFreq = count;
            maxNum = arr[i];
        }
    }

    printf("%d\n", maxNum);
    return 0;
}
