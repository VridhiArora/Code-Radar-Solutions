// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int arr[n];
    
   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    
    int temp=arr[0];
    int temp2=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
        if(arr[i]<temp2)
        {
            temp2=arr[i];
        }
    }
   printf("%d %d\n", temp2, temp);
}    
    
    