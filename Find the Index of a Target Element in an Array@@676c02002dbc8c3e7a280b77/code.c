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

   int target;
   int found=0;
   scanf("%d",&target);
   for(int i=0;i<n;i++)
   {
    if(arr[i]==target)
    {
        printf("%d",i);
        found=1;
        break;
        
    }
   }
   if(!found){
    printf("-1");
   }
   
}