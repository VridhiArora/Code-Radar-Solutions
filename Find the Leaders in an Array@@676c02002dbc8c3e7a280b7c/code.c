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

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[n-1])
        {
            printf("%d",arr[i]);
        }
    }
}