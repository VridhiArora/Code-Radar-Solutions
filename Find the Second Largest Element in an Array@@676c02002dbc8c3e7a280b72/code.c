// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
int largest=arr[0];
int sec=-1;
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
    sec=largest;
    largest=arr[i];    
    }
    else if(arr[i] > sec && arr[i] < largest)
    {
    printf("%d",sec);
    }
}
}
