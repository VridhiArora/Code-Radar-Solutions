// Your code here...
#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d %d", &n,&a);

    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
int count=0;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==a)
     {
       count++;
     }
     
    }printf("%d",count);
}