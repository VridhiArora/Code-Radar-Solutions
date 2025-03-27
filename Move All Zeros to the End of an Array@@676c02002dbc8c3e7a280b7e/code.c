// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        // Reverse the array while taking input
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[i+1]=arr[i];
        }
        printf("%d",arr[i]);
    }
}