// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int even=arr[0];
    
    for (int i = 0; i < n; i++) 
    {
        if(arr[i]%2==0)
        {
            if(even>arr[i])
            {
                printf("%d",even);
            }
        }
       
    }
    
}