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
    int largest=arr[i];
    int second=arr[i+1];
    if(largest>second)
    {
        printf("Not Sorted");
    }
    else
    {
        printf("Sorted");
    }
}