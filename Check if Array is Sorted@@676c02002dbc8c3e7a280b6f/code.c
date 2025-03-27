// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
     {
        if (arr[i] <= arr[i + 1]) {
            printf("Not Sorted\n");
            return 0;  // Exit early since it's not sorted
        }
    }

    // If we finish the loop, the array is sorted
    printf("Sorted\n");
    return 0;
}